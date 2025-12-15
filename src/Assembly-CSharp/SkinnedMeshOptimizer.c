
/* Void DisableOptimizer() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isEnabled = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar2->fields).skinnedMeshOptimizeManager,
     this_00 != (SkinnedMeshOptimizeManager *)0x0)) {
    SStack_3.skinnedMesh = (this->fields).optimizationData.skinnedMesh;
    SStack_3.mesh = (this->fields).optimizationData.mesh;
    SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_RemoveoptimizationData
              (this_00,&SStack_3,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_OnDestroy
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pMVar2->fields).game != (MVNetworkGame *)0x0) && ((this->fields).isEnabled != 0)) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_SkinnedMeshOptimizeManager
                          ((MethodInfo *)0x0);
      if (this_00 == (SkinnedMeshOptimizeManager *)0x0) goto code_?;
      SStack_4.skinnedMesh = (this->fields).optimizationData.skinnedMesh;
      SStack_4.mesh = (this->fields).optimizationData.mesh;
      SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_RemoveoptimizationData
                (this_00,&SStack_4,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_Start
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__Add_UnityEngine__SkinnedMeshRenderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_SkinnedMeshRenderer_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__List__
            );
  pLVar2 = (List_1_UnityEngine_MeshRenderer_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List__);
  pLVar3 = (this->fields).meshData;
  uVar4 = 0;
  if (pLVar3 != (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) {
    lVar5 = 0x20;
    do {
      iVar6 = iRam_?;
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__Add_UnityEngine__SkinnedMeshRenderer_
      ;
      if ((pLVar3->fields)._size <= (int)uVar4) {
        pSVar8 = &(this->fields).optimizationData;
        pSVar8->skinnedMesh = pLVar1;
        if (iVar6 != 0) {
          uVar4 = (uint)((ulonglong)pSVar8 >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar10 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
            iVar6 = iRam_?;
          } while (!bVar11);
        }
        (this->fields).optimizationData.mesh = pLVar2;
        if (iVar6 != 0) {
          uVar4 = (uint)((ulonglong)&(this->fields).optimizationData.mesh >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar10 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (ulonglong)(uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        if ((this->fields).isEnabled == 0) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar12 != (MVGameControllerBase *)0x0) &&
           (obj = (pMVar12->fields).skinnedMeshOptimizeManager,
           obj != (SkinnedMeshOptimizeManager *)0x0)) {
          pLVar1 = (this->fields).optimizationData.skinnedMesh;
          pLVar2 = (this->fields).optimizationData.mesh;
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
          pLVar13 = (obj->fields).optimizationDataList;
          if (pLVar13 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
            if ((pLVar13->fields)._size == 0) {
              if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
                FUN_?();
              }
              UpdateController::UpdateController_AddUpdateObject
                        ((IUpdatecontrollerSubscriberUpdate *)obj,
                         UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
            }
            pLVar13 = (obj->fields).optimizationDataList;
            if (pLVar13 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
              pLStack_14 = pLVar1;
              pLStack_15 = pLVar2;
              FUN_?(pLVar13,&pLStack_14,
                            MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                           );
              return;
            }
          }
        }
        break;
      }
      pLVar3 = (this->fields).meshData;
      if (pLVar3 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pSVar17 = (pLVar3->fields)._items;
      if (pSVar17 == (SkinnedMeshOptimizer_MeshData__Array *)0x0) break;
      if ((uint)pSVar17->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pOVar18 = *(Object **)
                 ((longlong)&((SkinnedMeshOptimizer_MeshData__Array *)(pSVar17->vector + -2))->klass
                 + lVar5);
      if (pLVar1 == (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) break;
      piVar19 = &(pLVar1->fields)._version;
      *piVar19 = *piVar19 + 1;
      pSVar20 = (pLVar1->fields)._items;
      if (pSVar20 == (SkinnedMeshRenderer__Array *)0x0) break;
      uVar21 = (pLVar1->fields)._size;
      if (uVar21 < (uint)pSVar20->max_length) {
        (pLVar1->fields)._size = uVar21 + 1;
        FUN_?(pSVar20,(longlong)(int)uVar21,pOVar18);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,pOVar18,pMVar7->klass->rgctx_data[0xe].method);
      }
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__Add_UnityEngine__MeshRenderer_
      ;
      pLVar3 = (this->fields).meshData;
      if (pLVar3 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar4) goto code_?;
      pSVar17 = (pLVar3->fields)._items;
      if (pSVar17 == (SkinnedMeshOptimizer_MeshData__Array *)0x0) break;
      if ((uint)pSVar17->max_length <= uVar4) goto code_?;
      pOVar18 = *(Object **)((longlong)pSVar17->vector + lVar5 + -0x18);
      if (pLVar2 == (List_1_UnityEngine_MeshRenderer_ *)0x0) break;
      piVar19 = &(pLVar2->fields)._version;
      *piVar19 = *piVar19 + 1;
      pMVar22 = (pLVar2->fields)._items;
      if (pMVar22 == (MeshRenderer__Array *)0x0) break;
      uVar21 = (pLVar2->fields)._size;
      if (uVar21 < (uint)pMVar22->max_length) {
        (pLVar2->fields)._size = uVar21 + 1;
        FUN_?(pMVar22,(longlong)(int)uVar21,pOVar18);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar2,pOVar18,pMVar7->klass->rgctx_data[0xe].method);
      }
      pLVar3 = (this->fields).meshData;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (pLVar3 != (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0);
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void TurnOffMesh() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizer::MeshData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).meshData;
  uVar2 = 0;
  if (pLVar1 != (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).meshData;
      if (pLVar1 == (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 == (SkinnedMeshOptimizer_MeshData__Array *)0x0) break;
      if ((uint)pSVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      obj = *(Object **)((longlong)pSVar5->vector + lVar3 + -0x18);
      if (obj == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar6 = obj[1].klass;
      if (pOVar6 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pOVar6);
      pLVar1 = (this->fields).meshData;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (pLVar1 != (List_1_SkinnedMeshOptimizer_MeshData_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SkinnedMeshOptimizer() */

void Assembly-CSharp.dll::SkinnedMeshOptimizer::SkinnedMeshOptimizer__ctor
               (SkinnedMeshOptimizer *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isEnabled = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

