
/* Object Factory[Object](Object[]) */

Object * Assembly-CSharp.dll::WinningConditionManagerClient::WinningConditionManagerClient_Factory
                   (WinningConditionManagerClient *this,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
  }
  RVar1.value = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  gameCounterManager =
       (Int32__Class *)mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__AllCollectiblesCollectedClient,(MethodInfo *)0x0);
  bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                    ((Object **)gameCounterManager,(Object **)pTVar2,(MethodInfo *)0x0);
  pIVar4 = TypeRef__FlagReachedClient;
  pIVar5 = (Int32__Class *)method;
  if (bVar3 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)gameCounterManager,(Object **)pTVar2,(MethodInfo *)0x0);
    RVar1.value = TypeRef__KillLimitClient;
    if (bVar3 != 0) {
      RVar1.value = pIVar4;
      if (args != (Object__Array *)0x0) {
        if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
           (pIVar5 = (Int32__Class *)args->vector[1], args->max_length < 3)) goto code_?;
        gameCounterManager = (Int32__Class *)args->vector[2];
        method = (MethodInfo *)&UNK_?;
        this_00 = (Int32__Class *)func_?();
        if (this_00 != (Int32__Class *)0x0) {
          if ((gameCounterManager == (Int32__Class *)0x0) ||
             ((pIVar6 = gameCounterManager,
              pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
              (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
              *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
              (pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
              *(GameStatCounterManager__Class **)
               (((gameCounterManager->_0).image[2].typeCount - 4) +
               (uint)(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth * 4) ==
              TypeInfo__GameStatCounterManager)))) {
            if (pIVar5 == (Int32__Class *)0x0) goto code_?;
            pIVar6 = pIVar5;
            pIVar7 = TypeInfo__System__Int32;
            if ((Il2CppClass *)((pIVar5->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar8 = (int32_t *)func_?(pIVar5);
              if ((RVar1.value == (Int32__Class *)0x0) ||
                 ((pIVar5 = (Int32__Class *)(((Int32__Class *)RVar1.value)->_0).image,
                  pIVar6 = RVar1.value, pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
                  (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                  (pIVar5->_1).typeHierarchyDepth &&
                  (pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
                  (pIVar5->_1).typeHierarchy
                  [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                  (Il2CppClass *)TypeInfo__WinningCondition)))) {
                FlagReachedClient::FlagReachedClient__ctor
                          ((FlagReachedClient *)this_00,RVar1.value,*piVar8,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      func_?();
      pIVar6 = gameCounterManager;
      pIVar7 = RVar1.value;
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)gameCounterManager,(Object **)pTVar2,(MethodInfo *)0x0);
    pIVar4 = TypeRef__OculusKillLimitClient;
    if (bVar3 != 0) {
      if (args != (Object__Array *)0x0) {
        if ((((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
            (pIVar9 = (Int32__Class *)args->vector[1], args->max_length < 3)) ||
           (pIVar5 = (Int32__Class *)args->vector[2], args->max_length < 4)) goto code_?;
        gameCounterManager = (Int32__Class *)args->vector[3];
        method = (MethodInfo *)&UNK_?;
        iVar10 = func_?();
        if ((iVar10 != 0) && (gameCounterManager != (Int32__Class *)0x0)) {
          pIVar6 = gameCounterManager;
          pIVar7 = TypeInfo__System__Int32;
          if ((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar8 = (int32_t *)func_?(gameCounterManager);
            killLimit = *piVar8;
            if ((pIVar5 == (Int32__Class *)0x0) ||
               ((gameCounterManager = (Int32__Class *)(pIVar5->_0).image, pIVar6 = pIVar5,
                pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
                (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
                (gameCounterManager->_1).typeHierarchyDepth &&
                (pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
                (gameCounterManager->_1).typeHierarchy
                [(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1] ==
                (Il2CppClass *)TypeInfo__GameStatCounterManager)))) {
              if (pIVar9 == (Int32__Class *)0x0) goto code_?;
              pIVar6 = pIVar9;
              pIVar7 = TypeInfo__System__Int32;
              if ((Il2CppClass *)((pIVar9->_0).image)->codeGenModule ==
                  (TypeInfo__System__Int32->_0).element_class) {
                this_00 = (Int32__Class *)&UNK_?;
                piVar8 = (int32_t *)func_?(pIVar9);
                if ((RVar1.value == (Int32__Class *)0x0) ||
                   ((gameCounterManager = (Int32__Class *)(((Int32__Class *)RVar1.value)->_0).image,
                    pIVar6 = RVar1.value, pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
                    (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                    (gameCounterManager->_1).typeHierarchyDepth &&
                    (pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
                    (gameCounterManager->_1).typeHierarchy
                    [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                    (Il2CppClass *)TypeInfo__WinningCondition)))) {
                  KillLimitClient::KillLimitClient__ctor
                            ((KillLimitClient *)this_00,RVar1.value,*piVar8,
                             (GameStatCounterManager *)pIVar5,killLimit,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)gameCounterManager,(Object **)pTVar2,(MethodInfo *)0x0);
    RVar1.value = TypeRef__TimeLimitClient;
    if (bVar3 != 0) {
      RVar1.value = pIVar4;
      if (args != (Object__Array *)0x0) {
        if ((((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
            (pIVar9 = (Int32__Class *)args->vector[1], args->max_length < 3)) ||
           (pIVar5 = (Int32__Class *)args->vector[2], args->max_length < 4)) goto code_?;
        gameCounterManager = (Int32__Class *)args->vector[3];
        this_00 = (Int32__Class *)func_?();
        if ((this_00 != (Int32__Class *)0x0) && (gameCounterManager != (Int32__Class *)0x0)) {
          pIVar6 = gameCounterManager;
          pIVar7 = TypeInfo__System__Int32;
          if (((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
               (TypeInfo__System__Int32->_0).element_class) &&
             ((func_?(gameCounterManager), pIVar5 == (Int32__Class *)0x0 ||
              ((gameCounterManager = (Int32__Class *)(pIVar5->_0).image, pIVar6 = pIVar5,
               pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
               (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
               (gameCounterManager->_1).typeHierarchyDepth &&
               (pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
               (gameCounterManager->_1).typeHierarchy
               [(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1] ==
               (Il2CppClass *)TypeInfo__GameStatCounterManager)))))) {
            if (pIVar9 == (Int32__Class *)0x0) goto code_?;
            pIVar6 = pIVar9;
            pIVar7 = TypeInfo__System__Int32;
            if ((Il2CppClass *)((pIVar9->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar8 = (int32_t *)func_?(pIVar9);
              if ((RVar1.value == (Int32__Class *)0x0) ||
                 ((gameCounterManager = (Int32__Class *)(((Int32__Class *)RVar1.value)->_0).image,
                  pIVar6 = RVar1.value, pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
                  (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                  (gameCounterManager->_1).typeHierarchyDepth &&
                  (pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
                  (gameCounterManager->_1).typeHierarchy
                  [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                  (Il2CppClass *)TypeInfo__WinningCondition)))) {
                OculusKillLimitClient::OculusKillLimitClient__ctor
                          ((OculusKillLimitClient *)this_00,RVar1.value,*piVar8,
                           (GameStatCounterManager *)pIVar5,0,(MethodInfo *)0x0);
                RVar1.value = *(void **)(_UNK_? + 4);
                bVar11 = (((Int32__Class *)RVar1.value)->_1).field_0x56;
                goto joined_?;
              }
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)gameCounterManager,(Object **)pTVar2,(MethodInfo *)0x0);
    pIVar4 = TypeRef__TimeAttackFlagReachedClient;
    if (bVar3 != 0) {
      if (args != (Object__Array *)0x0) {
        if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
           (gameCounterManager = (Int32__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        pIVar5 = (Int32__Class *)args->vector[2];
        method = (MethodInfo *)&UNK_?;
        iVar10 = func_?();
        if (iVar10 != 0) {
          if ((pIVar5 == (Int32__Class *)0x0) ||
             ((pIVar6 = pIVar5, pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
              (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
              *(byte *)&(pIVar5->_0).image[4].nameNoExt &&
              (pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
              *(GameStatCounterManager__Class **)
               (((pIVar5->_0).image[2].typeCount - 4) +
               (uint)(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth * 4) ==
              TypeInfo__GameStatCounterManager)))) {
            if (gameCounterManager == (Int32__Class *)0x0) goto code_?;
            pIVar6 = gameCounterManager;
            pIVar7 = TypeInfo__System__Int32;
            if ((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              this_00 = (Int32__Class *)&UNK_?;
              piVar8 = (int32_t *)func_?(gameCounterManager);
              if (RVar1.value == (Int32__Class *)0x0) {
                TimeLimitClient::TimeLimitClient__ctor
                          ((TimeLimitClient *)this_00,(WinningCondition *)0x0,*piVar8,
                           (GameStatCounterManager *)pIVar5,(MethodInfo *)0x0);
              }
              else {
                gameCounterManager = (Int32__Class *)(((Int32__Class *)RVar1.value)->_0).image;
                pIVar6 = RVar1.value;
                pIVar7 = (Int32__Class *)TypeInfo__WinningCondition;
                if (((gameCounterManager->_1).typeHierarchyDepth <
                     (TypeInfo__WinningCondition->_1).typeHierarchyDepth) ||
                   (pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
                   (gameCounterManager->_1).typeHierarchy
                   [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] !=
                   (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                TimeLimitClient::TimeLimitClient__ctor
                          ((TimeLimitClient *)this_00,RVar1.value,*piVar8,
                           (GameStatCounterManager *)pIVar5,(MethodInfo *)0x0);
              }
code_?:
              RVar1.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
              pOVar12 = (Object *)func_?(this_00,RVar1.value);
              goto code_?;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)gameCounterManager,(Object **)pTVar2,(MethodInfo *)0x0);
    RVar1.value = pIVar4;
    if (bVar3 == 0) {
      if (this != (WinningConditionManagerClient *)0x0) {
        pOVar12 = (Object *)(*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)();
        return pOVar12;
      }
      goto code_?;
    }
    if (args == (Object__Array *)0x0) goto code_?;
    if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
       (gameCounterManager = (Int32__Class *)args->vector[1], args->max_length < 3))
    goto code_?;
    pIVar5 = (Int32__Class *)args->vector[2];
    method = (MethodInfo *)&UNK_?;
    this_00 = (Int32__Class *)func_?();
    if (this_00 == (Int32__Class *)0x0) goto code_?;
    if ((pIVar5 == (Int32__Class *)0x0) ||
       ((pGVar13 = TypeInfo__GameStatCounterManager,
        (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
        *(byte *)&(pIVar5->_0).image[4].nameNoExt &&
        (*(GameStatCounterManager__Class **)
          (((pIVar5->_0).image[2].typeCount - 4) +
          (uint)(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth * 4) ==
         TypeInfo__GameStatCounterManager)))) {
      if (gameCounterManager == (Int32__Class *)0x0) goto code_?;
      pIVar6 = TypeInfo__System__Int32;
      if ((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar8 = (int32_t *)func_?(gameCounterManager);
        if ((RVar1.value == (Int32__Class *)0x0) ||
           ((gameCounterManager = (Int32__Class *)(((Int32__Class *)RVar1.value)->_0).image,
            pWVar14 = TypeInfo__WinningCondition,
            (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
            (gameCounterManager->_1).typeHierarchyDepth &&
            ((gameCounterManager->_1).typeHierarchy
             [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
             (Il2CppClass *)TypeInfo__WinningCondition)))) {
          TimeAttackFlagReachedClient::TimeAttackFlagReachedClient__ctor
                    ((TimeAttackFlagReachedClient *)this_00,RVar1.value,*piVar8,
                     (GameStatCounterManager *)pIVar5,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (args == (Object__Array *)0x0) goto code_?;
    if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
       (pIVar5 = (Int32__Class *)args->vector[1], args->max_length < 3)) goto code_?;
    gameCounterManager = (Int32__Class *)args->vector[2];
    this_00 = (Int32__Class *)func_?(TypeInfo__AllCollectiblesCollectedClient);
    if (this_00 == (Int32__Class *)0x0) goto code_?;
    if ((gameCounterManager == (Int32__Class *)0x0) ||
       ((pIVar6 = gameCounterManager, pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
        (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
        *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
        (pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager,
        *(GameStatCounterManager__Class **)
         (((gameCounterManager->_0).image[2].typeCount - 4) +
         (uint)(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth * 4) ==
        TypeInfo__GameStatCounterManager)))) {
      if (pIVar5 == (Int32__Class *)0x0) goto code_?;
      pIVar6 = pIVar5;
      pIVar7 = TypeInfo__System__Int32;
      if ((Il2CppClass *)((pIVar5->_0).image)->codeGenModule ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar8 = (int32_t *)func_?(pIVar5);
        if ((RVar1.value == (Int32__Class *)0x0) ||
           ((pIVar5 = (Int32__Class *)(((Int32__Class *)RVar1.value)->_0).image,
            pIVar6 = RVar1.value, pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
            (TypeInfo__WinningCondition->_1).typeHierarchyDepth <= (pIVar5->_1).typeHierarchyDepth
            && (pIVar7 = (Int32__Class *)TypeInfo__WinningCondition,
               (pIVar5->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1]
               == (Il2CppClass *)TypeInfo__WinningCondition)))) {
          AllCollectiblesCollectedClient::AllCollectiblesCollectedClient__ctor
                    ((AllCollectiblesCollectedClient *)this_00,RVar1.value,*piVar8,
                     (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
code_?:
          RVar1.value = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
          bVar11 = (((Int32__Class *)RVar1.value)->_1).field_0x56;
joined_?:
          if ((bVar11 & 1) == 0) {
            RVar1.value = (void *)func_?();
          }
          pOVar12 = (Object *)func_?();
code_?:
          gameCounterManager = this_00;
          pIVar6 = this_00;
          pIVar7 = RVar1.value;
          if (pOVar12 != (Object *)0x0) {
            return pOVar12;
          }
        }
      }
    }
code_?:
    func_?(pIVar6,pIVar7);
    pWVar14 = extraout_EDX;
code_?:
    func_?(RVar1.value,pWVar14);
    pIVar6 = extraout_ECX;
code_?:
    func_?(gameCounterManager,pIVar6);
    pGVar13 = extraout_EDX_00;
  }
  func_?(pIVar5,pGVar13);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pOVar12 = (Object *)(*pcVar15)();
  return pOVar12;
}

