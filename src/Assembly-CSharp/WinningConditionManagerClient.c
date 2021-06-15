
/* Object Factory[Object](Object[]) */

Object * Assembly-CSharp.dll::WinningConditionManagerClient::WinningConditionManagerClient_Factory
                   (WinningConditionManagerClient *this,Object__Array *args,MethodInfo *method)

{
  pMVar1 = method;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  RVar2.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar2,(MethodInfo *)0x0);
  pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__AllCollectiblesCollectedClient,(MethodInfo *)0x0);
  pIVar5 = (Int32__Class *)TypeRef__FlagReachedClient;
  if (pTVar3 == pTVar4) {
    if (args == (Object__Array *)0x0) goto code_?;
    uVar6 = args->max_length;
    if (uVar6 == 0) goto code_?;
    if (1 < uVar6) {
      RVar2.value = args->vector[1];
      if (uVar6 < 3) goto code_?;
      in_stack_7 = (WinningCondition *)args->vector[2];
      this_02 = (KillLimitClient *)func_?(TypeInfo__AllCollectiblesCollectedClient);
      pGVar8 = TypeInfo__GameStatCounterManager;
      if (in_stack_7 == (WinningCondition *)0x0) {
        method = (MethodInfo *)0x0;
code_?:
        if (RVar2.value == (Int32__Class *)0x0) goto code_?;
        pIVar5 = TypeInfo__System__Int32;
        if (*(Il2CppClass **)
             (((_union_86 *)&((Int32__Class *)RVar2.value)->_0)->__klassIndex + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar9 = (int32_t *)func_?();
        if (RVar2.value == (Int32__Class *)0x0) {
          in_stack_10 = (Int32__Class *)0x0;
        }
        else {
          piVar9 = (int32_t *)&UNK_?;
          pIVar5 = RVar2.value;
          in_stack_10 =
               (Int32__Class *)func_?(RVar2.value,TypeInfo__WinningCondition);
          if (in_stack_10 == (Int32__Class *)0x0) goto code_?;
        }
        AllCollectiblesCollectedClient::AllCollectiblesCollectedClient__ctor
                  ((AllCollectiblesCollectedClient *)this_02,(WinningCondition *)in_stack_10,
                   *piVar9,(GameStatCounterManager *)method,(MethodInfo *)0x0);
code_?:
        RVar2.value = pMVar1->parameters[1];
        if (((uint)(((Int32__Class *)RVar2.value)->vtable).Equals.methodPtr & 0x10000) == 0) {
          func_?();
        }
        if (this_02 == (KillLimitClient *)0x0) {
          return (Object *)0x0;
        }
        pOVar11 = (Object *)func_?();
        if (pOVar11 != (Object *)0x0) {
          return pOVar11;
        }
        goto code_?;
      }
      method = (MethodInfo *)
               func_?(in_stack_7,TypeInfo__GameStatCounterManager,
                               TypeInfo__GameStatCounterManager);
      if (method != (MethodInfo *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar5,(MethodInfo *)0x0);
    RVar2.value = TypeRef__KillLimitClient;
    if (pTVar3 == pTVar4) {
      RVar2.value = pIVar5;
      if (args == (Object__Array *)0x0) goto code_?;
      uVar6 = args->max_length;
      if (uVar6 == 0) goto code_?;
      if (uVar6 < 2) goto code_?;
      RVar2.value = args->vector[1];
      pIVar5 = in_stack_10;
      if (uVar6 < 3) goto code_?;
      in_stack_7 = (WinningCondition *)args->vector[2];
      this_02 = (KillLimitClient *)func_?(TypeInfo__FlagReachedClient);
      pGVar8 = TypeInfo__GameStatCounterManager;
      if (in_stack_7 == (WinningCondition *)0x0) {
        method = (MethodInfo *)0x0;
      }
      else {
        method = (MethodInfo *)
                 func_?(in_stack_7,TypeInfo__GameStatCounterManager,
                                 TypeInfo__GameStatCounterManager);
        if (method == (MethodInfo *)0x0) goto code_?;
      }
      if (RVar2.value == (Int32__Class *)0x0) goto code_?;
      pIVar5 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(((_union_86 *)&((Int32__Class *)RVar2.value)->_0)->__klassIndex + 0x20)
          == (TypeInfo__System__Int32->_0).element_class) {
        piVar9 = (int32_t *)func_?();
        if (RVar2.value == (Int32__Class *)0x0) {
          in_stack_10 = (Int32__Class *)0x0;
code_?:
          FlagReachedClient::FlagReachedClient__ctor
                    ((FlagReachedClient *)this_02,(WinningCondition *)in_stack_10,*piVar9,
                     (GameStatCounterManager *)method,(MethodInfo *)0x0);
          goto code_?;
        }
        piVar9 = (int32_t *)&UNK_?;
        pIVar5 = RVar2.value;
        in_stack_10 = (Int32__Class *)func_?(RVar2.value,TypeInfo__WinningCondition)
        ;
        if (in_stack_10 != (Int32__Class *)0x0) goto code_?;
        goto code_?;
      }
    }
    else {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar2,(MethodInfo *)0x0);
      pIVar12 = TypeRef__OculusKillLimitClient;
      if (pTVar3 == pTVar4) {
        if (args == (Object__Array *)0x0) goto code_?;
        uVar6 = args->max_length;
        if (uVar6 == 0) goto code_?;
        pIVar5 = (Int32__Class *)args->vector[0];
        if (uVar6 < 2) goto code_?;
        if (uVar6 < 3) goto code_?;
        RVar2.value = args->vector[2];
        if (uVar6 < 4) goto code_?;
        this_02 = (KillLimitClient *)func_?(args->vector[3]);
        if (RVar2.value == (Int32__Class *)0x0) {
          method = (MethodInfo *)0x0;
code_?:
          RVar2.value = pIVar5;
          if (RVar2.value == (Int32__Class *)0x0) {
            in_stack_7 = (WinningCondition *)0x0;
          }
          else {
            in_stack_10 = (Int32__Class *)&UNK_?;
            in_stack_7 =
                 (WinningCondition *)func_?(RVar2.value,TypeInfo__WinningCondition);
            if (in_stack_7 == (WinningCondition *)0x0) goto code_?;
          }
          pIVar5 = TypeInfo__System__Int32;
          piVar9 = (int32_t *)func_?(TypeInfo__System__Int32);
          iVar13 = *piVar9;
          in_stack_10 = TypeInfo__System__Int32;
          piVar9 = (int32_t *)func_?(pIVar5,TypeInfo__System__Int32);
          KillLimitClient::KillLimitClient__ctor
                    (this_02,in_stack_7,*piVar9,(GameStatCounterManager *)method,iVar13,
                     (MethodInfo *)0x0);
          goto code_?;
        }
        in_stack_10 = (Int32__Class *)&UNK_?;
        method = (MethodInfo *)func_?(RVar2.value,TypeInfo__GameStatCounterManager);
        if (method != (MethodInfo *)0x0) goto code_?;
      }
      else {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
        RVar2.value = TypeRef__TimeLimitClient;
        if (pTVar3 == pTVar4) {
          RVar2.value = (Int32__Class *)0x0;
          if (args != (Object__Array *)0x0) {
            uVar14 = func_?(0);
            uVar15 = func_?(1);
            uVar16 = func_?(2);
            uVar17 = func_?(3);
            this_01 = (OculusKillLimitClient *)func_?(TypeInfo__OculusKillLimitClient);
            piVar9 = (int32_t *)func_?(uVar17,TypeInfo__System__Int32);
            iVar13 = *piVar9;
            piVar9 = (int32_t *)func_?(uVar15,TypeInfo__System__Int32);
            pMVar1 = (MethodInfo *)0x0;
            pGVar18 = (GameStatCounterManager *)
                      func_?(uVar16,TypeInfo__GameStatCounterManager);
            id = *piVar9;
            pWVar19 = (WinningCondition *)func_?(uVar14,TypeInfo__WinningCondition);
            OculusKillLimitClient::OculusKillLimitClient__ctor
                      (this_01,pWVar19,id,pGVar18,iVar13,pMVar1);
            pIVar12 = method->parameters[1];
            if ((pIVar12[0x17].type & 1) == 0) {
              func_?(pIVar12);
            }
            pOVar11 = (Object *)func_?(this_01,pIVar12);
            return pOVar11;
          }
        }
        else {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar2,(MethodInfo *)0x0);
          pIVar12 = TypeRef__TimeAttackFlagReachedClient;
          if (pTVar3 == pTVar4) {
            if (args != (Object__Array *)0x0) {
              uVar14 = func_?(0);
              uVar15 = func_?(1);
              uVar16 = func_?(2);
              this_00 = (TimeLimitClient *)func_?(TypeInfo__TimeLimitClient);
              piVar9 = (int32_t *)func_?(uVar15,TypeInfo__System__Int32);
              pMVar1 = (MethodInfo *)0x0;
              pGVar18 = (GameStatCounterManager *)
                        func_?(uVar16,TypeInfo__GameStatCounterManager);
              iVar13 = *piVar9;
              pWVar19 = (WinningCondition *)func_?(uVar14,TypeInfo__WinningCondition);
              TimeLimitClient::TimeLimitClient__ctor(this_00,pWVar19,iVar13,pGVar18,pMVar1);
code_?:
              uVar14 = func_?(method->parameters[1]);
              pOVar11 = (Object *)func_?(this_00,uVar14);
              return pOVar11;
            }
          }
          else {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar12,(MethodInfo *)0x0);
            RVar2.value = pIVar12;
            if (pTVar3 == pTVar4) {
              if (args != (Object__Array *)0x0) {
                uVar14 = func_?(0);
                uVar15 = func_?(1);
                uVar16 = func_?(2);
                this_00 = (TimeLimitClient *)func_?(TypeInfo__TimeAttackFlagReachedClient);
                piVar9 = (int32_t *)func_?(uVar15,TypeInfo__System__Int32);
                pMVar1 = (MethodInfo *)0x0;
                pGVar18 = (GameStatCounterManager *)
                          func_?(uVar16,TypeInfo__GameStatCounterManager);
                iVar13 = *piVar9;
                pWVar19 = (WinningCondition *)func_?(uVar14,TypeInfo__WinningCondition);
                TimeAttackFlagReachedClient::TimeAttackFlagReachedClient__ctor
                          ((TimeAttackFlagReachedClient *)this_00,pWVar19,iVar13,pGVar18,pMVar1);
                goto code_?;
              }
            }
            else if (this != (WinningConditionManagerClient *)0x0) {
              pOVar11 = (Object *)
                       (*(code *)method->parameters[2]->data)(this,args,method->parameters[2]);
              return pOVar11;
            }
          }
        }
code_?:
        func_?(0);
code_?:
        uVar14 = func_?(0,0);
        func_?(uVar14);
code_?:
        uVar14 = func_?(0,0);
        func_?(uVar14);
code_?:
        uVar14 = func_?(0,0);
        func_?(uVar14);
code_?:
        in_stack_10 = (Int32__Class *)0x0;
        uVar14 = func_?(0,0);
        func_?(uVar14);
code_?:
        func_?();
      }
code_?:
      func_?(RVar2.value,in_stack_10);
      pIVar5 = RVar2.value;
code_?:
      uVar14 = func_?(0,0);
      func_?(uVar14);
      RVar2.value = pIVar5;
code_?:
      uVar14 = func_?(0,0);
      func_?(uVar14);
      pIVar5 = in_stack_10;
code_?:
      uVar14 = func_?(0,0);
      func_?(uVar14);
code_?:
      pGVar8 = (GameStatCounterManager__Class *)&UNK_?;
      func_?(RVar2.value,pIVar5);
      pIVar5 = extraout_ECX;
    }
code_?:
    func_?(RVar2.value,pIVar5);
code_?:
    func_?(in_stack_7,pGVar8);
code_?:
    uVar14 = func_?(0,0);
    func_?(uVar14);
  }
  uVar14 = func_?(0,0);
  func_?(uVar14);
code_?:
  uVar14 = func_?(0,0);
  func_?(uVar14);
  pcVar20 = (code *)swi(3);
  pOVar11 = (Object *)(*pcVar20)();
  return pOVar11;
}

