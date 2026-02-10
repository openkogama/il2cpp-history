
/* Void Awake() */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Awake
               (EnumPoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PoolEnums);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_pool_of_type__s_does_already_e);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pool;
  uVar2 = 0;
  if (pLVar1 != (List_1_Pool_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).pool;
      if (pLVar1 == (List_1_Pool_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pPVar5 = (pLVar1->fields)._items;
      if (pPVar5 == (Pool__Array *)0x0) break;
      if ((uint)pPVar5->max_length <= uVar2) goto code_?;
      pPVar6 = *(Pool **)((longlong)pPVar5->vector + lVar3 + -0x20);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      pvVar7 = (void *)(*pcRam_?)(pvVar7);
      parent = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar7,
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
      if (pPVar6 == (Pool *)0x0) break;
      Pool::Pool_Initialize(pPVar6,parent,(MethodInfo *)0x0);
      pLVar1 = (this->fields).pool;
      if (pLVar1 == (List_1_Pool_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pPVar5 = (pLVar1->fields)._items;
      if (pPVar5 == (Pool__Array *)0x0) break;
      if ((uint)pPVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = *(longlong *)((longlong)pPVar5->vector + lVar3 + -0x20);
      if ((lVar9 == 0) || (pPVar5 = (this->fields).lookupTable, pPVar5 == (Pool__Array *)0x0))
      break;
      uVar10 = *(uint *)(lVar9 + 0x1c);
      if ((uint)pPVar5->max_length <= uVar10) goto code_?;
      if (pPVar5->vector[(int)uVar10] == (Pool *)0x0) {
        pLVar1 = (this->fields).pool;
        if ((pLVar1 == (List_1_Pool_ *)0x0) || (lVar9 = FUN_?(pLVar1,uVar2), lVar9 == 0))
        break;
        uVar10 = *(uint *)(lVar9 + 0x1c);
        if (((this->fields).pool == (List_1_Pool_ *)0x0) ||
           (pPVar6 = (Pool *)FUN_?(), pPVar5 == (Pool__Array *)0x0)) break;
        if ((pPVar6 != (Pool *)0x0) && (lVar9 = FUN_?(pPVar6), lVar9 == 0)) {
          uVar8 = FUN_?();
          FUN_?(uVar8,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((uint)pPVar5->max_length <= uVar10) goto code_?;
        pPVar5->vector[(int)uVar10] = pPVar6;
        func_?(pPVar5->vector + (int)uVar10);
      }
      else {
        if (((this->fields).pool == (List_1_Pool_ *)0x0) || (lVar9 = FUN_?(), lVar9 == 0))
        break;
        uStack_11 = *(undefined4 *)(lVar9 + 0x1c);
        EStack_12.klass = (Enum__Class *)TypeInfo__PoolEnums;
        EStack_12.monitor = (MonitorData *)0xffffffffffffffff;
        pSVar13 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_12,(MethodInfo *)0x0);
        pSVar13 = mscorlib.dll::System::String::String_Format
                           (StringLiteral_A_pool_of_type__s_does_already_e,(Object *)pSVar13,
                            (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar13,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).pool;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_Pool_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Object Instantiate[Object](PoolEnums) */

Object * Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Instantiate
                   (EnumPoolManager *this,PoolEnums__Enum pEnum,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  pPVar1 = (this->fields).lookupTable;
  if (pPVar1 != (Pool__Array *)0x0) {
    if ((PoolEnums__Enum)pPVar1->max_length <= pEnum) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    this_00 = pPVar1->vector[(int)pEnum];
    if (this_00 != (Pool *)0x0) {
      lVar4 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
      if (*(longlong *)(lVar4 + 0x38) == 0) {
        FUN_?(lVar4);
      }
      pMVar5 = Pool::Pool_get_Next(this_00,(MethodInfo *)0x0);
      lVar4 = **(longlong **)(lVar4 + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_?(lVar4);
      }
      if (pMVar5 != (MonoBehaviour *)0x0) {
        pMVar6 = pMVar5->klass;
        cVar7 = FUN_?(lVar4,pMVar6);
        if (cVar7 != '\0') {
          return (Object *)pMVar5;
        }
        if (((pMVar6->_1).field_0x6e & 0x10) != 0) {
          if (((((*(byte *)(lVar4 + 0x118) & 0x20) != 0) || (*(char *)(lVar4 + 0x2a) == '\x13')) ||
              (*(char *)(lVar4 + 0x2a) == '\x1e')) &&
             (((*(longlong *)(lVar4 + 0x70) != 0 &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x70) + 0x28) != 0)) &&
              (lVar8 = FUN_?(pMVar5), lVar8 != 0)))) {
            return (Object *)pMVar5;
          }
          pMVar9 = (MonoBehaviour *)0x0;
          if (lVar4 == lRam_?) {
            pMVar9 = pMVar5;
          }
          return (Object *)pMVar9;
        }
      }
      return (Object *)0x0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}


/* Void Return(MonoBehaviour, PoolEnums) */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager_Return
               (EnumPoolManager *this,MonoBehaviour *obj,PoolEnums__Enum pEnum,MethodInfo *method)

{
  pPVar1 = (this->fields).lookupTable;
  if (pPVar1 != (Pool__Array *)0x0) {
    if ((PoolEnums__Enum)pPVar1->max_length <= pEnum) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pPVar3 = pPVar1->vector[(int)pEnum];
    if (pPVar3 != (Pool *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = (pPVar3->fields).pool;
      uVar5 = 0;
      if (pMVar4 != (MonoBehaviour__Array *)0x0) {
        lVar6 = 0x20;
        do {
          if ((int)pMVar4->max_length <= (int)uVar5) {
            if (obj != (MonoBehaviour *)0x0) {
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)obj,(MethodInfo *)0x0);
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
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                        ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
              return;
            }
            break;
          }
          pMVar4 = (pPVar3->fields).pool;
          if (pMVar4 == (MonoBehaviour__Array *)0x0) break;
          if ((uint)pMVar4->max_length <= uVar5) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pMVar8 = *(MonoBehaviour **)((longlong)pMVar4->vector + lVar6 + -0x20);
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
          if (obj == (MonoBehaviour *)0x0 && pMVar8 == (MonoBehaviour *)0x0) {
code_?:
            if ((obj != (MonoBehaviour *)0x0) &&
               (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)obj,(MethodInfo *)0x0),
               pGVar7 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar7,0,(MethodInfo *)0x0);
              this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)obj,(MethodInfo *)0x0);
              if (this_00 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (this_00,(pPVar3->fields).parent,(MethodInfo *)0x0);
                pLVar9 = (pPVar3->fields).available;
                if (pLVar9 != (List_1_System_Int32_ *)0x0) {
                  FUN_?(pLVar9,uVar5,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  return;
                }
              }
            }
            break;
          }
          if (obj == (MonoBehaviour *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pMVar8 == (MonoBehaviour *)0x0) break;
            bVar10 = (pMVar8->fields)._._._.m_CachedPtr == (void *)0x0;
          }
          else if (pMVar8 == (MonoBehaviour *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar10 = (obj->fields)._._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar10 = pMVar8 == obj;
          }
          if (bVar10) goto code_?;
          pMVar4 = (pPVar3->fields).pool;
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (pMVar4 != (MonoBehaviour__Array *)0x0);
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* EnumPoolManager() */

void Assembly-CSharp.dll::EnumPoolManager::EnumPoolManager__ctor
               (EnumPoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Pool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (Pool__Array *)FUN_?(TypeInfo__Pool,0x20);
  bVar2 = iRam_? != 0;
  (this->fields).lookupTable = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).lookupTable >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar8;
  if (lVar9 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar9 = lRam_?;
  }
  else {
    do {
      uVar3 = (uint)ppMVar10;
      LOCK();
      bVar2 = uVar3 != uRam_?;
      uVar11 = uVar3;
      uVar12 = uVar3 + 1;
      if (bVar2) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar2) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar3 = uVar11, uVar11 != 2)
            );
    while (uVar3 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar3 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar9;
  puVar13 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar13 == 1;
  if (bVar2) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar3 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar14 == 1;
  if (bVar2) {
    *puVar14 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar3 = GetCurrentThreadId();
    psVar15 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar3 == *psVar15;
    if (bVar2) {
      *psVar15 = (ulonglong)uVar3;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar13 == 1;
      if (bVar2) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar9._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar9._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar9 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar9 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar3 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar3;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar3 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar10 = ppMVar8;
      pIVar17 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar10 = pIVar17->methods;
            pMVar18 = *ppMVar10;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar8;
                while (ppMVar20 = ppMVar19 + 0x3052aacd,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar10 = ppMVar8;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_24 < 0x10) {
code_?:
      lVar9 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar6;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar9 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar9;
        if (iRam_? != 0) {
          uVar3 = (uint)(lVar16 + 0x28U >> 0xc);
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
      }
      FUN_?(pOVar7,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar21 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar7->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

