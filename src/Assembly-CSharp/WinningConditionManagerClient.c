
/* Object Factory[Object](Object[]) */

Object * Assembly-CSharp.dll::WinningConditionManagerClient::WinningConditionManagerClient_Factory
                   (WinningConditionManagerClient *this,Object__Array *args,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeRef__AllCollectiblesCollectedClient);
    func_?(&TypeInfo__AllCollectiblesCollectedClient);
    func_?(&TypeRef__FlagReachedClient);
    func_?(&TypeInfo__FlagReachedClient);
    func_?(&TypeInfo__GameStatCounterManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeRef__KillLimitClient);
    func_?(&TypeInfo__KillLimitClient);
    func_?(&TypeRef__OculusKillLimitClient);
    func_?(&TypeInfo__OculusKillLimitClient);
    func_?(&TypeRef__TimeAttackFlagReachedClient);
    func_?(&TypeInfo__TimeAttackFlagReachedClient);
    func_?(&TypeRef__TimeLimitClient);
    func_?(&TypeInfo__TimeLimitClient);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__WinningCondition);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  handle_00.value = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  this_00 = (OculusKillLimitClient *)
            mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle_00,(MethodInfo *)0x0);
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__AllCollectiblesCollectedClient,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
          UnsafeUtility_EnumEquals
                    ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
  pIVar3 = TypeRef__FlagReachedClient;
  pMVar4 = method;
  if (bVar2 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals
                      ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
    handle_00.value = TypeRef__KillLimitClient;
    if (bVar2 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        args = (Object__Array *)&UNK_?;
        func_?();
      }
      pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle_00,(MethodInfo *)0x0);
      bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals
                        ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
      pIVar3 = TypeRef__OculusKillLimitClient;
      if (bVar2 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          args = (Object__Array *)&UNK_?;
          func_?();
        }
        pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
        bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals
                          ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
        handle = TypeRef__TimeLimitClient;
        if (bVar2 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            args = (Object__Array *)&UNK_?;
            func_?();
          }
          pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
          bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
          handle_00.value = TypeRef__TimeAttackFlagReachedClient;
          if (bVar2 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              args = (Object__Array *)&UNK_?;
              func_?();
            }
            pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle_00,(MethodInfo *)0x0)
            ;
            bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                    ::UnsafeUtility_EnumEquals
                              ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              if (this != (WinningConditionManagerClient *)0x0) {
                pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Factory
                                   ((WinningConditionManager *)this,args,
                                    (method->field7_0x1c).rgctx_data[2].method);
                return pOVar5;
              }
              goto code_?;
            }
            if (args == (Object__Array *)0x0) goto code_?;
            uVar6 = args->max_length;
            if (((uVar6 == 0) || (handle_00.value = args->vector[0], uVar6 < 2)) ||
               (this_00 = (OculusKillLimitClient *)args->vector[1], uVar6 < 3))
            goto code_?;
            method = (MethodInfo *)TypeInfo__TimeAttackFlagReachedClient;
            pMVar4 = (MethodInfo *)args->vector[2];
            func_?();
            if (pMVar4 != (MethodInfo *)0x0) {
              bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
              pGVar8 = TypeInfo__GameStatCounterManager;
              if (((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_1).
                   naturalAligment < bVar7) ||
                 ((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_1).typeHierarchy
                  [bVar7 - 1] != (Il2CppClass *)TypeInfo__GameStatCounterManager))
              goto code_?;
            }
            if (this_00 == (OculusKillLimitClient *)0x0) goto code_?;
            pIVar9 = TypeInfo__System__Int32;
            if ((((Type__Class *)this_00->klass)->_0).element_class !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar10 = (int32_t *)func_?(this_00);
            this_00 = (OculusKillLimitClient *)*piVar10;
            if (handle_00.value != (WinningCondition *)0x0) {
              bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
              pWVar11 = TypeInfo__WinningCondition;
              if (((((WinningCondition *)handle_00.value)->klass->_1).naturalAligment < bVar7) ||
                 ((((WinningCondition *)handle_00.value)->klass->_1).typeHierarchy[bVar7 - 1] !=
                  (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
            }
            TimeAttackFlagReachedClient::TimeAttackFlagReachedClient__ctor
                      ((TimeAttackFlagReachedClient *)pMVar4,handle_00.value,(int32_t)this_00,
                       (GameStatCounterManager *)pMVar4,(MethodInfo *)0x0);
code_?:
            handle_00.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
            if (pMVar4 == (MethodInfo *)0x0) {
              return (Object *)0x0;
            }
            pOVar5 = (Object *)func_?();
            if (pOVar5 != (Object *)0x0) {
              return pOVar5;
            }
            goto code_?;
          }
          handle_00.value = handle;
          if (args == (Object__Array *)0x0) goto code_?;
          uVar6 = args->max_length;
          if (((uVar6 == 0) || (handle_00.value = args->vector[0], uVar6 < 2)) ||
             (this_00 = (OculusKillLimitClient *)args->vector[1], uVar6 < 3)) goto code_?;
          method = (MethodInfo *)TypeInfo__TimeLimitClient;
          pMVar4 = (MethodInfo *)args->vector[2];
          func_?();
          if (pMVar4 == (MethodInfo *)0x0) {
code_?:
            if (this_00 == (OculusKillLimitClient *)0x0) goto code_?;
            pIVar9 = TypeInfo__System__Int32;
            if ((((Type__Class *)this_00->klass)->_0).element_class ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar10 = (int32_t *)func_?(this_00);
              this_00 = (OculusKillLimitClient *)*piVar10;
              if (handle_00.value == (WinningCondition *)0x0) {
                TimeLimitClient::TimeLimitClient__ctor
                          ((TimeLimitClient *)pMVar4,(WinningCondition *)0x0,(int32_t)this_00,
                           (GameStatCounterManager *)pMVar4,(MethodInfo *)0x0);
              }
              else {
                bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
                pWVar11 = TypeInfo__WinningCondition;
                if (((((WinningCondition *)handle_00.value)->klass->_1).naturalAligment < bVar7) ||
                   ((((WinningCondition *)handle_00.value)->klass->_1).typeHierarchy[bVar7 - 1] !=
                    (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                TimeLimitClient::TimeLimitClient__ctor
                          ((TimeLimitClient *)pMVar4,handle_00.value,(int32_t)this_00,
                           (GameStatCounterManager *)pMVar4,(MethodInfo *)0x0);
              }
              goto code_?;
            }
            goto code_?;
          }
          bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
          pGVar8 = TypeInfo__GameStatCounterManager;
          if ((bVar7 <= (((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).naturalAligment) &&
             ((((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).typeHierarchy[bVar7 - 1] ==
              (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
          goto code_?;
        }
        handle_00.value = pIVar3;
        if (args == (Object__Array *)0x0) goto code_?;
        uVar6 = args->max_length;
        if ((((uVar6 == 0) || (handle_00.value = args->vector[0], uVar6 < 2)) ||
            (pOVar12 = args->vector[1], uVar6 < 3)) ||
           (pMVar4 = (MethodInfo *)args->vector[2], uVar6 < 4)) goto code_?;
        pOVar5 = args->vector[3];
        method = (MethodInfo *)TypeInfo__OculusKillLimitClient;
        this_00 = (OculusKillLimitClient *)func_?();
        uVar13 = CONCAT44(TypeInfo__System__Int32,pOVar5);
        if (pOVar5 == (Object *)0x0) goto code_?;
        if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?(pOVar5);
        if (pMVar4 != (MethodInfo *)0x0) {
          bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
          pGVar8 = TypeInfo__GameStatCounterManager;
          if (((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_1).naturalAligment
               < bVar7) ||
             ((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_1).typeHierarchy
              [bVar7 - 1] != (Il2CppClass *)TypeInfo__GameStatCounterManager))
          goto code_?;
        }
        if (pOVar12 == (Object *)0x0) goto code_?;
        pIVar9 = TypeInfo__System__Int32;
        if ((pOVar12->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar10 = (int32_t *)func_?(pOVar12);
          if (handle_00.value != (WinningCondition *)0x0) {
            bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
            pWVar11 = TypeInfo__WinningCondition;
            if (((((WinningCondition *)handle_00.value)->klass->_1).naturalAligment < bVar7) ||
               ((((WinningCondition *)handle_00.value)->klass->_1).typeHierarchy[bVar7 - 1] !=
                (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
          }
          OculusKillLimitClient::OculusKillLimitClient__ctor
                    (this_00,handle_00.value,*piVar10,(GameStatCounterManager *)pMVar4,0,
                     (MethodInfo *)0x0);
          goto code_?;
        }
code_?:
        uVar13 = func_?(pOVar12,pIVar9);
      }
      else {
        if (args == (Object__Array *)0x0) goto code_?;
        uVar6 = args->max_length;
        if ((((uVar6 == 0) || (handle_00.value = args->vector[0], uVar6 < 2)) || (uVar6 < 3)) ||
           (pMVar4 = (MethodInfo *)args->vector[2], uVar6 < 4)) goto code_?;
        pOVar5 = args->vector[3];
        method = (MethodInfo *)TypeInfo__KillLimitClient;
        this_00 = (OculusKillLimitClient *)func_?();
        uVar13 = CONCAT44(TypeInfo__System__Int32,pOVar5);
        if (pOVar5 == (Object *)0x0) goto code_?;
        if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          pOVar12 = (Object *)&UNK_?;
          piVar10 = (int32_t *)func_?(pOVar5);
          killLimit = *piVar10;
          if (pMVar4 != (MethodInfo *)0x0) {
            bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
            pGVar8 = TypeInfo__GameStatCounterManager;
            if (((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_1).
                 naturalAligment < bVar7) ||
               ((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_1).typeHierarchy
                [bVar7 - 1] != (Il2CppClass *)TypeInfo__GameStatCounterManager))
            goto code_?;
          }
          if (pOVar12 == (Object *)0x0) goto code_?;
          pIVar9 = TypeInfo__System__Int32;
          if ((pOVar12->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar10 = (int32_t *)func_?(pOVar12);
          if (handle_00.value == (WinningCondition *)0x0) {
            KillLimitClient::KillLimitClient__ctor
                      ((KillLimitClient *)this_00,(WinningCondition *)0x0,*piVar10,
                       (GameStatCounterManager *)pMVar4,killLimit,(MethodInfo *)0x0);
          }
          else {
            bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
            pWVar11 = TypeInfo__WinningCondition;
            if (((((WinningCondition *)handle_00.value)->klass->_1).naturalAligment < bVar7) ||
               ((((WinningCondition *)handle_00.value)->klass->_1).typeHierarchy[bVar7 - 1] !=
                (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
            KillLimitClient::KillLimitClient__ctor
                      ((KillLimitClient *)this_00,handle_00.value,*piVar10,
                       (GameStatCounterManager *)pMVar4,killLimit,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
code_?:
      func_?(uVar13);
      pIVar9 = extraout_ECX_01;
    }
    else {
      handle_00.value = pIVar3;
      if (args == (Object__Array *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pWVar11 = extraout_EDX;
code_?:
        func_?(handle_00.value,pWVar11);
        pIVar9 = extraout_ECX;
code_?:
        func_?(this_00,pIVar9);
        pGVar8 = extraout_EDX_00;
code_?:
        func_?(pMVar4,pGVar8);
code_?:
        func_?();
        pOVar12 = extraout_ECX_00;
        pIVar9 = extraout_EDX_01;
        goto code_?;
      }
      uVar6 = args->max_length;
      if (((uVar6 == 0) || (handle_00.value = args->vector[0], uVar6 < 2)) ||
         (pMVar4 = (MethodInfo *)args->vector[1], uVar6 < 3)) goto code_?;
      pOVar5 = args->vector[2];
      method = (MethodInfo *)TypeInfo__FlagReachedClient;
      this_00 = (OculusKillLimitClient *)func_?();
      if (pOVar5 != (Object *)0x0) {
        bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
        if (((pOVar5->klass->_1).naturalAligment < bVar7) ||
           ((pOVar5->klass->_1).typeHierarchy[bVar7 - 1] !=
            (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
      }
      if (pMVar4 == (MethodInfo *)0x0) goto code_?;
      pIVar9 = TypeInfo__System__Int32;
      if ((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_0).element_class ==
          (TypeInfo__System__Int32->_0).element_class) {
        pGVar14 = (GameStatCounterManager *)&UNK_?;
        puVar15 = (undefined4 *)func_?(pMVar4);
        pMVar4 = (MethodInfo *)*puVar15;
        if (handle_00.value != (WinningCondition *)0x0) {
          bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
          pWVar11 = TypeInfo__WinningCondition;
          if ((bVar7 <= (((WinningCondition *)handle_00.value)->klass->_1).naturalAligment) &&
             ((((WinningCondition *)handle_00.value)->klass->_1).typeHierarchy[bVar7 - 1] ==
              (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
          goto code_?;
        }
code_?:
        FlagReachedClient::FlagReachedClient__ctor
                  ((FlagReachedClient *)this_00,handle_00.value,(int32_t)pMVar4,pGVar14,
                   (MethodInfo *)0x0);
code_?:
        if (((uint)((method->field7_0x1c).rgctx_data[1].klass)->vtable[0].methodPtr & 0x100) == 0) {
          func_?();
        }
        if (this_00 == (OculusKillLimitClient *)0x0) {
          return (Object *)0x0;
        }
        pOVar5 = (Object *)func_?();
        if (pOVar5 != (Object *)0x0) {
          return pOVar5;
        }
        goto code_?;
      }
    }
code_?:
    func_?(pMVar4,pIVar9);
    pOVar5 = extraout_EDX_02;
  }
  else {
    if (args == (Object__Array *)0x0) goto code_?;
    uVar6 = args->max_length;
    if (((uVar6 == 0) || (handle_00.value = args->vector[0], uVar6 < 2)) ||
       (pMVar4 = (MethodInfo *)args->vector[1], uVar6 < 3)) goto code_?;
    pOVar5 = (Object *)&UNK_?;
    this_00 = (OculusKillLimitClient *)func_?();
    if (pOVar5 == (Object *)0x0) {
code_?:
      if (pMVar4 != (MethodInfo *)0x0) {
        pIVar9 = TypeInfo__System__Int32;
        if ((((TimeAttackFlagReachedClient__Class *)pMVar4->methodPointer)->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          pGVar14 = (GameStatCounterManager *)&UNK_?;
          puVar15 = (undefined4 *)func_?(pMVar4);
          pMVar4 = (MethodInfo *)*puVar15;
          if (handle_00.value != (WinningCondition *)0x0) {
            bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
            pWVar11 = TypeInfo__WinningCondition;
            if (((((WinningCondition *)handle_00.value)->klass->_1).naturalAligment < bVar7) ||
               ((((WinningCondition *)handle_00.value)->klass->_1).typeHierarchy[bVar7 - 1] !=
                (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
          }
          AllCollectiblesCollectedClient::AllCollectiblesCollectedClient__ctor
                    ((AllCollectiblesCollectedClient *)this_00,handle_00.value,(int32_t)pMVar4,
                     pGVar14,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
    if ((bVar7 <= (pOVar5->klass->_1).naturalAligment) &&
       ((pOVar5->klass->_1).typeHierarchy[bVar7 - 1] ==
        (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
  }
code_?:
  func_?(pOVar5,TypeInfo__GameStatCounterManager);
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar16)();
  return pOVar5;
}

