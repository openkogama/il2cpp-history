
/* Singleton`1[System.Object]() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::
     Object]::Singleton_1_System_Object___ctor(Singleton_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar2 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar3 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar4 = ppMVar2;
  if (lVar3 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar3 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar4;
      LOCK();
      bVar6 = uVar5 != uRam_?;
      uVar7 = uVar5;
      uVar8 = uVar5 + 1;
      if (bVar6) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar6) && (ppMVar4 = (MethodInfo **)(ulonglong)uVar7, uVar5 = uVar7, uVar7 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar3;
  puVar9 = &(pOVar1->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar9 == 1;
  if (bVar6) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar1->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar10 == 1;
  if (bVar6) {
    *puVar10 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar11 = &(pOVar1->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar5 == *psVar11;
    if (bVar6) {
      *psVar11 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar1->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar9 == 1;
      if (bVar6) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar3._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
      lVar3._4_4_ = (pOVar1->_1).cctor_started;
      if (lVar3 == 0) {
        (pOVar1->_1).initializationExceptionGCHandle = 0;
        (pOVar1->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar3 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar1->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar1->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar1->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar1->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar1);
      ppMVar4 = ppMVar2;
      pIVar13 = (Il2CppClass *)pOVar1;
code_?:
      do {
        if (ppMVar4 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar4 = pIVar13->methods;
            pMVar14 = *ppMVar4;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar2;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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
          ppMVar4 = ppMVar4 + 1;
          if (ppMVar4 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar4;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar4 = ppMVar2;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar1->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar1->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar1->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar3 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar3 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar1,lVar12);
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
  uVar18._0_4_ = (pOVar1->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar1->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Object get_Instance() */

Object * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::
         Object]::Singleton_1_System_Object__get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___There_is_more_than_1_instance_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___Instance_doesn_t_exist_in_the_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  lVar2 = *(longlong *)pIVar1->static_fields;
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
  if (lVar2 != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)(lVar2 + 0x10) != 0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?();
  }
  pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectsByType_2
                     (FindObjectsSortMode__Enum_None,pIVar1->rgctx_data[3].method);
  if (pOVar3 == (Object__Array *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pOVar5 = (Object *)(*pcVar4)();
    return pOVar5;
  }
  iVar6 = (int)pOVar3->max_length;
  if (iVar6 == 1) {
    if ((int)pOVar3->max_length == 0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pOVar5 = (Object *)(*pcVar4)();
      return pOVar5;
    }
    pOVar5 = pOVar3->vector[0];
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data[2].klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    *(Object **)pIVar1->static_fields = pOVar5;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pIVar1 = pIVar1->rgctx_data[2].klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)pIVar1->static_fields >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
  }
  else {
    pIVar1 = method->klass;
    if (iVar6 < 2) {
      if ((pIVar1->field_0x135 & 1) == 0) {
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      IVar11 = pIVar1->rgctx_data[5];
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)IVar11,(MethodInfo *)0x0);
      pSVar13 = (String *)0x0;
      str1 = StringLiteral___Instance_doesn_t_exist_in_the_;
      if (pTVar12 != (Type *)0x0) {
        pSVar13 = (String *)
                  (*(pTVar12->klass->vtable).ToString.methodPtr)
                            (pTVar12,(pTVar12->klass->vtable).ToString.method);
        str1 = StringLiteral___Instance_doesn_t_exist_in_the_;
      }
    }
    else {
      if ((pIVar1->field_0x135 & 1) == 0) {
        pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
      }
      IVar11 = pIVar1->rgctx_data[5];
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)IVar11,(MethodInfo *)0x0);
      if (pTVar12 == (Type *)0x0) {
        pSVar13 = (String *)0x0;
        str1 = StringLiteral___There_is_more_than_1_instance_;
      }
      else {
        pSVar13 = (String *)
                  (*(pTVar12->klass->vtable).ToString.methodPtr)
                            (pTVar12,(pTVar12->klass->vtable).ToString.method);
        str1 = StringLiteral___There_is_more_than_1_instance_;
      }
    }
    pSVar13 = mscorlib.dll::System::String::String_Concat_4(pSVar13,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar13,(MethodInfo *)0x0);
  }
code_?:
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  return *(Object **)pIVar1->static_fields;
}

