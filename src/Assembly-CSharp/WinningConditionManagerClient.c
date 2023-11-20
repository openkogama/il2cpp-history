
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
  this_00 = (WinningCondition__Class *)
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
    handle = TypeRef__KillLimitClient;
    if (bVar2 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals
                        ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
      handle_00.value = TypeRef__OculusKillLimitClient;
      if (bVar2 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle_00,(MethodInfo *)0x0);
        bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals
                          ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
        pIVar3 = TypeRef__TimeLimitClient;
        if (bVar2 != 0) {
          if (args != (Object__Array *)0x0) {
            if ((((args->max_length == 0) ||
                 (handle_00.value = args->vector[0], args->max_length < 2)) ||
                (args->max_length < 3)) ||
               (pMVar4 = (MethodInfo *)args->vector[2], args->max_length < 4))
            goto code_?;
            pOVar5 = args->vector[3];
            method = (MethodInfo *)&UNK_?;
            this_00 = (WinningCondition__Class *)func_?();
            uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar5);
            if (pOVar5 != (Object *)0x0) {
              if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              pOVar7 = (Object *)&UNK_?;
              piVar8 = (int32_t *)func_?(pOVar5);
              killLimit = *piVar8;
              if ((pMVar4 != (MethodInfo *)0x0) &&
                 ((pGVar9 = TypeInfo__GameStatCounterManager,
                  (((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).naturalAligment <
                  (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
                  ((((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).typeHierarchy
                   [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
                   (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
              if (pOVar7 != (Object *)0x0) {
                pIVar10 = TypeInfo__System__Int32;
                if ((pOVar7->klass->_0).element_class ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar8 = (int32_t *)func_?(pOVar7);
                  if ((handle_00.value == (Il2CppClass *)0x0) ||
                     ((pWVar11 = TypeInfo__WinningCondition, gameCounterManager = pMVar4,
                      (TypeInfo__WinningCondition->_1).naturalAligment <=
                      (((WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image)->_1).
                      naturalAligment &&
                      ((((WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image)->_1).
                       typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
                       (Il2CppClass *)TypeInfo__WinningCondition)))) {
                    OculusKillLimitClient::OculusKillLimitClient__ctor
                              ((OculusKillLimitClient *)this_00,handle_00.value,*piVar8,
                               (GameStatCounterManager *)pMVar4,killLimit,(MethodInfo *)0x0);
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
            }
          }
code_?:
          func_?();
code_?:
          func_?();
          pWVar11 = extraout_EDX;
          gameCounterManager = pMVar4;
          goto code_?;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
        bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals
                          ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
        handle_00.value = TypeRef__TimeAttackFlagReachedClient;
        if (bVar2 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle_00,(MethodInfo *)0x0);
          bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if (this != (WinningConditionManagerClient *)0x0) {
              pOVar5 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Factory
                                 ((WinningConditionManager *)this,args,
                                  (method->field7_0x1c).rgctx_data[2].method);
              return pOVar5;
            }
          }
          else if (args != (Object__Array *)0x0) {
            if (((args->max_length == 0) ||
                (handle_00.value = args->vector[0], args->max_length < 2)) ||
               (this_00 = (WinningCondition__Class *)args->vector[1], args->max_length < 3))
            goto code_?;
            gameCounterManager = (MethodInfo *)args->vector[2];
            method = (MethodInfo *)&UNK_?;
            pMVar12 = (MethodInfo *)func_?();
            pMVar4 = gameCounterManager;
            if ((gameCounterManager != (MethodInfo *)0x0) &&
               ((pGVar9 = TypeInfo__GameStatCounterManager,
                (((TimeLimitClient__Class *)gameCounterManager->methodPointer)->_1).naturalAligment
                < (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
                ((((TimeLimitClient__Class *)gameCounterManager->methodPointer)->_1).typeHierarchy
                 [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
                 (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
            if (this_00 != (WinningCondition__Class *)0x0) {
              pIVar10 = TypeInfo__System__Int32;
              if ((Il2CppClass *)((this_00->_0).image)->codeGenModule ==
                  (TypeInfo__System__Int32->_0).element_class) {
                pMVar4 = pMVar12;
                piVar8 = (int32_t *)func_?(this_00);
                if ((handle_00.value != (Il2CppClass *)0x0) &&
                   ((this_00 = (WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image,
                    pWVar11 = TypeInfo__WinningCondition,
                    (this_00->_1).naturalAligment < (TypeInfo__WinningCondition->_1).naturalAligment
                    || ((this_00->_1).typeHierarchy
                        [(TypeInfo__WinningCondition->_1).naturalAligment - 1] !=
                        (Il2CppClass *)TypeInfo__WinningCondition)))) goto code_?;
                TimeAttackFlagReachedClient::TimeAttackFlagReachedClient__ctor
                          ((TimeAttackFlagReachedClient *)pMVar4,handle_00.value,*piVar8,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
                goto code_?;
              }
              goto code_?;
            }
          }
          goto code_?;
        }
        handle_00.value = pIVar3;
        if (args == (Object__Array *)0x0) goto code_?;
        if (((args->max_length == 0) || (handle_00.value = args->vector[0], args->max_length < 2))
           || (this_00 = (WinningCondition__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        pMVar4 = (MethodInfo *)args->vector[2];
        method = (MethodInfo *)&UNK_?;
        func_?();
        if ((pMVar4 == (MethodInfo *)0x0) ||
           ((pGVar9 = TypeInfo__GameStatCounterManager,
            (TypeInfo__GameStatCounterManager->_1).naturalAligment <=
            (((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).naturalAligment &&
            ((((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).typeHierarchy
             [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] ==
             (Il2CppClass *)TypeInfo__GameStatCounterManager)))) {
          if (this_00 == (WinningCondition__Class *)0x0) goto code_?;
          pIVar10 = TypeInfo__System__Int32;
          if ((Il2CppClass *)((this_00->_0).image)->codeGenModule ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar8 = (int32_t *)func_?(this_00);
            if (handle_00.value == (Il2CppClass *)0x0) {
              TimeLimitClient::TimeLimitClient__ctor
                        ((TimeLimitClient *)pMVar4,(WinningCondition *)0x0,*piVar8,
                         (GameStatCounterManager *)pMVar4,(MethodInfo *)0x0);
            }
            else {
              this_00 = (WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image;
              pWVar11 = TypeInfo__WinningCondition;
              gameCounterManager = pMVar4;
              if (((this_00->_1).naturalAligment < (TypeInfo__WinningCondition->_1).naturalAligment)
                 || ((this_00->_1).typeHierarchy
                     [(TypeInfo__WinningCondition->_1).naturalAligment - 1] !=
                     (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
              TimeLimitClient::TimeLimitClient__ctor
                        ((TimeLimitClient *)pMVar4,handle_00.value,*piVar8,
                         (GameStatCounterManager *)pMVar4,(MethodInfo *)0x0);
            }
code_?:
            handle_00.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      handle_00.value = handle;
      if (args == (Object__Array *)0x0) goto code_?;
      if ((((args->max_length == 0) || (handle_00.value = args->vector[0], args->max_length < 2)) ||
          (pOVar7 = args->vector[1], args->max_length < 3)) ||
         (pMVar4 = (MethodInfo *)args->vector[2], args->max_length < 4)) goto code_?;
      pOVar5 = args->vector[3];
      method = (MethodInfo *)&UNK_?;
      this_00 = (WinningCondition__Class *)func_?();
      uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar5);
      if (pOVar5 == (Object *)0x0) goto code_?;
      if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        func_?(pOVar5);
        if ((pMVar4 != (MethodInfo *)0x0) &&
           ((pGVar9 = TypeInfo__GameStatCounterManager,
            (((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).naturalAligment <
            (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
            ((((TimeLimitClient__Class *)pMVar4->methodPointer)->_1).typeHierarchy
             [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
             (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
        if (pOVar7 == (Object *)0x0) goto code_?;
        pIVar10 = TypeInfo__System__Int32;
        if ((pOVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          killLimit_00 = &UNK_?;
          piVar8 = (int32_t *)func_?(pOVar7);
          if (handle_00.value == (Il2CppClass *)0x0) {
            KillLimitClient::KillLimitClient__ctor
                      ((KillLimitClient *)this_00,(WinningCondition *)0x0,*piVar8,
                       (GameStatCounterManager *)pMVar4,(int32_t)killLimit_00,(MethodInfo *)0x0);
          }
          else {
            pWVar11 = TypeInfo__WinningCondition;
            gameCounterManager = pMVar4;
            if (((((WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image)->_1).
                 naturalAligment < (TypeInfo__WinningCondition->_1).naturalAligment) ||
               ((((WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image)->_1).
                typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
            KillLimitClient::KillLimitClient__ctor
                      ((KillLimitClient *)this_00,handle_00.value,*piVar8,
                       (GameStatCounterManager *)pMVar4,(int32_t)killLimit_00,(MethodInfo *)0x0);
          }
code_?:
          if (((uint)((method->field7_0x1c).rgctx_data[1].klass)->vtable[0].methodPtr & 0x100) == 0)
          {
            func_?();
          }
          if (this_00 == (WinningCondition__Class *)0x0) {
            return (Object *)0x0;
          }
          pOVar5 = (Object *)func_?();
          if (pOVar5 != (Object *)0x0) {
            return pOVar5;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      handle_00.value = pIVar3;
      if (args == (Object__Array *)0x0) goto code_?;
      if (((args->max_length == 0) || (handle_00.value = args->vector[0], args->max_length < 2)) ||
         (this_00 = (WinningCondition__Class *)args->vector[1], args->max_length < 3))
      goto code_?;
      pOVar5 = args->vector[2];
      method = (MethodInfo *)&UNK_?;
      pMVar4 = (MethodInfo *)func_?();
      if ((pOVar5 != (Object *)0x0) &&
         (((pOVar5->klass->_1).naturalAligment <
           (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
          ((pOVar5->klass->_1).typeHierarchy
           [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
      if (this_00 == (WinningCondition__Class *)0x0) goto code_?;
      pIVar10 = TypeInfo__System__Int32;
      if ((Il2CppClass *)((this_00->_0).image)->codeGenModule !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      pGVar13 = (GameStatCounterManager *)&UNK_?;
      piVar8 = (int32_t *)func_?(this_00);
      if ((handle_00.value == (Il2CppClass *)0x0) ||
         ((this_00 = (WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image,
          pWVar11 = TypeInfo__WinningCondition, gameCounterManager = pMVar4,
          (TypeInfo__WinningCondition->_1).naturalAligment <= (this_00->_1).naturalAligment &&
          ((this_00->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__WinningCondition)))) {
        FlagReachedClient::FlagReachedClient__ctor
                  ((FlagReachedClient *)pMVar4,handle_00.value,*piVar8,pGVar13,(MethodInfo *)0x0);
        goto code_?;
      }
code_?:
      func_?(handle_00.value,pWVar11);
      pIVar10 = extraout_ECX;
      pMVar4 = gameCounterManager;
code_?:
      func_?(this_00,pIVar10);
      pGVar9 = extraout_EDX_00;
code_?:
      func_?(pMVar4,pGVar9);
code_?:
      func_?();
      pOVar7 = extraout_ECX_00;
      pIVar10 = extraout_EDX_01;
code_?:
      uVar6 = func_?(pOVar7,pIVar10);
    }
code_?:
    func_?(uVar6);
    pOVar5 = extraout_EDX_02;
  }
  else {
    if (args == (Object__Array *)0x0) goto code_?;
    if (((args->max_length == 0) || (handle_00.value = args->vector[0], args->max_length < 2)) ||
       (this_00 = (WinningCondition__Class *)args->vector[1], args->max_length < 3))
    goto code_?;
    pOVar5 = (Object *)&UNK_?;
    pMVar4 = (MethodInfo *)func_?(TypeInfo__AllCollectiblesCollectedClient);
    if ((pOVar5 == (Object *)0x0) ||
       (((TypeInfo__GameStatCounterManager->_1).naturalAligment <=
         (pOVar5->klass->_1).naturalAligment &&
        ((pOVar5->klass->_1).typeHierarchy
         [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] ==
         (Il2CppClass *)TypeInfo__GameStatCounterManager)))) {
      if (this_00 == (WinningCondition__Class *)0x0) goto code_?;
      pIVar10 = TypeInfo__System__Int32;
      if ((Il2CppClass *)((this_00->_0).image)->codeGenModule !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      pGVar13 = (GameStatCounterManager *)&UNK_?;
      piVar8 = (int32_t *)func_?(this_00);
      if ((handle_00.value != (Il2CppClass *)0x0) &&
         ((this_00 = (WinningCondition__Class *)((Il2CppClass *)handle_00.value)->image,
          pWVar11 = TypeInfo__WinningCondition, gameCounterManager = pMVar4,
          (this_00->_1).naturalAligment < (TypeInfo__WinningCondition->_1).naturalAligment ||
          ((this_00->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__WinningCondition)))) goto code_?;
      AllCollectiblesCollectedClient::AllCollectiblesCollectedClient__ctor
                ((AllCollectiblesCollectedClient *)pMVar4,handle_00.value,*piVar8,pGVar13,
                 (MethodInfo *)0x0);
code_?:
      handle_00.value = (method->field7_0x1c).rgctx_data[1].klass;
      if (((uint)((Il2CppClass *)handle_00.value)->vtable[0].methodPtr & 0x100) == 0) {
        handle_00.value = (void *)func_?();
      }
code_?:
      if (pMVar4 == (MethodInfo *)0x0) {
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
  func_?(pOVar5,TypeInfo__GameStatCounterManager);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar14)();
  return pOVar5;
}

