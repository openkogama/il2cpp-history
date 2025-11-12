
/* Object Factory[Object](Object[]) */

Object * Assembly-CSharp.dll::WinningConditionManagerClient::WinningConditionManagerClient_Factory
                   (WinningConditionManagerClient *this,Object__Array *args,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeRef__AllCollectiblesCollectedClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AllCollectiblesCollectedClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__FlagReachedClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FlagReachedClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__KillLimitClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KillLimitClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__OculusKillLimitClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OculusKillLimitClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__TimeAttackFlagReachedClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeAttackFlagReachedClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__TimeLimitClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeLimitClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningCondition);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  parent = (WinningCondition *)0x0;
  pWVar2 = parent;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pvVar1);
    pWVar2 = (WinningCondition *)FUN_?(lVar3 + 0x20);
  }
  pIVar4 = TypeRef__AllCollectiblesCollectedClient;
  pWVar5 = parent;
  if (TypeRef__AllCollectiblesCollectedClient != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar4);
    pWVar5 = (WinningCondition *)FUN_?(lVar3 + 0x20);
  }
  pIVar4 = TypeRef__FlagReachedClient;
  if (pWVar2 == pWVar5) {
    if (args != (Object__Array *)0x0) {
      if ((((int)args->max_length == 0) ||
          (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
         (pOVar6 = args->vector[1], (uint)args->max_length < 3)) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        pOVar6 = (Object *)(*pcVar7)();
        return pOVar6;
      }
      pWVar5 = (WinningCondition *)args->vector[2];
      pWVar8 = (WinningCondition *)FUN_?(TypeInfo__AllCollectiblesCollectedClient);
      pWVar9 = parent;
      if (pWVar5 != (WinningCondition *)0x0) {
        bVar10 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
        if (((pWVar5->klass->_1).naturalAligment < bVar10) ||
           (pWVar9 = pWVar5,
           (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
           (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
          FUN_?(pWVar5);
          pcVar7 = (code *)swi(3);
          pOVar6 = (Object *)(*pcVar7)();
          return pOVar6;
        }
      }
      if (pOVar6 != (Object *)0x0) {
        if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar6);
          pcVar7 = (code *)swi(3);
          pOVar6 = (Object *)(*pcVar7)();
          return pOVar6;
        }
        if (pWVar2 != (WinningCondition *)0x0) {
          bVar10 = (TypeInfo__WinningCondition->_1).naturalAligment;
          if (((pWVar2->klass->_1).naturalAligment < bVar10) ||
             (parent = pWVar2,
             (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
             (Il2CppClass *)TypeInfo__WinningCondition)) {
            FUN_?(pWVar2);
            pcVar7 = (code *)swi(3);
            pOVar6 = (Object *)(*pcVar7)();
            return pOVar6;
          }
        }
        MVWorldObject.dll::WinningCondition::WinningCondition__ctor
                  (pWVar8,parent,*(int32_t *)&pOVar6[1].klass,(GameStatCounterManager *)pWVar9,0,1,
                   CONCAT31((int3)((uint)in_stack_11 >> 8),3),
                   CONCAT31((int3)((uint)in_stack_12 >> 8),2),(MethodInfo *)0x0);
        pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
          pvVar1 = (void *)FUN_?(pvVar1);
        }
        if (pWVar8 == (WinningCondition *)0x0) {
          return (Object *)0x0;
        }
        pOVar6 = (Object *)FUN_?(pWVar8,pvVar1);
        if (pOVar6 != (Object *)0x0) {
          return pOVar6;
        }
        FUN_?(pWVar8,pvVar1);
        pcVar7 = (code *)swi(3);
        pOVar6 = (Object *)(*pcVar7)();
        return pOVar6;
      }
    }
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pWVar5 = parent;
    if (pIVar4 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar3 = FUN_?(pIVar4);
      pWVar5 = (WinningCondition *)FUN_?(lVar3 + 0x20);
    }
    pIVar4 = TypeRef__KillLimitClient;
    if (pWVar2 == pWVar5) {
      if (args != (Object__Array *)0x0) {
        if ((((int)args->max_length == 0) ||
            (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
           (pOVar6 = args->vector[1], (uint)args->max_length < 3)) goto code_?;
        pWVar5 = (WinningCondition *)args->vector[2];
        pWVar8 = (WinningCondition *)FUN_?(TypeInfo__FlagReachedClient);
        pWVar9 = parent;
        if (pWVar5 != (WinningCondition *)0x0) {
          bVar10 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
          if (((pWVar5->klass->_1).naturalAligment < bVar10) ||
             (pWVar9 = pWVar5,
             (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
             (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
            FUN_?(pWVar5);
            pcVar7 = (code *)swi(3);
            pOVar6 = (Object *)(*pcVar7)();
            return pOVar6;
          }
        }
        if (pOVar6 != (Object *)0x0) {
          if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar6);
            pcVar7 = (code *)swi(3);
            pOVar6 = (Object *)(*pcVar7)();
            return pOVar6;
          }
          if (pWVar2 != (WinningCondition *)0x0) {
            bVar10 = (TypeInfo__WinningCondition->_1).naturalAligment;
            if (((pWVar2->klass->_1).naturalAligment < bVar10) ||
               (parent = pWVar2,
               (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
               (Il2CppClass *)TypeInfo__WinningCondition)) {
              FUN_?(pWVar2);
              pcVar7 = (code *)swi(3);
              pOVar6 = (Object *)(*pcVar7)();
              return pOVar6;
            }
          }
          MVWorldObject.dll::WinningCondition::WinningCondition__ctor
                    (pWVar8,parent,*(int32_t *)&pOVar6[1].klass,(GameStatCounterManager *)pWVar9,0,
                     1,CONCAT31((int3)((uint)in_stack_11 >> 8),2),
                     CONCAT31((int3)((uint)in_stack_12 >> 8),1),(MethodInfo *)0x0);
          pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
            pvVar1 = (void *)FUN_?(pvVar1);
          }
          if (pWVar8 == (WinningCondition *)0x0) {
            return (Object *)0x0;
          }
          pOVar6 = (Object *)FUN_?(pWVar8,pvVar1);
          if (pOVar6 != (Object *)0x0) {
            return pOVar6;
          }
          FUN_?(pWVar8,pvVar1);
          pcVar7 = (code *)swi(3);
          pOVar6 = (Object *)(*pcVar7)();
          return pOVar6;
        }
      }
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pWVar5 = parent;
      if (pIVar4 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar3 = FUN_?(pIVar4);
        pWVar5 = (WinningCondition *)FUN_?(lVar3 + 0x20);
      }
      pIVar4 = TypeRef__OculusKillLimitClient;
      if (pWVar2 == pWVar5) {
        if (args != (Object__Array *)0x0) {
          if (((((int)args->max_length == 0) ||
               (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
              (pOVar6 = args->vector[1], (uint)args->max_length < 3)) ||
             (pWVar5 = (WinningCondition *)args->vector[2], (uint)args->max_length < 4))
          goto code_?;
          pOVar13 = args->vector[3];
          pWVar9 = (WinningCondition *)FUN_?(TypeInfo__KillLimitClient);
          if (pOVar13 != (Object *)0x0) {
            if ((pOVar13->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar13,lRam_?);
              pcVar7 = (code *)swi(3);
              pOVar6 = (Object *)(*pcVar7)();
              return pOVar6;
            }
            pWVar8 = parent;
            if (pWVar5 != (WinningCondition *)0x0) {
              bVar10 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
              if (((pWVar5->klass->_1).naturalAligment < bVar10) ||
                 (pWVar8 = pWVar5,
                 (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                 (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                FUN_?(pWVar5);
                pcVar7 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar7)();
                return pOVar6;
              }
            }
            if (pOVar6 != (Object *)0x0) {
              if ((pOVar6->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar6,lRam_?);
                pcVar7 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar7)();
                return pOVar6;
              }
              if (pWVar2 != (WinningCondition *)0x0) {
                bVar10 = (TypeInfo__WinningCondition->_1).naturalAligment;
                if (((pWVar2->klass->_1).naturalAligment < bVar10) ||
                   (parent = pWVar2,
                   (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                   (Il2CppClass *)TypeInfo__WinningCondition)) {
                  FUN_?(pWVar2);
                  pcVar7 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar7)();
                  return pOVar6;
                }
              }
              MVWorldObject.dll::WinningCondition::WinningCondition__ctor
                        (pWVar9,parent,*(int32_t *)&pOVar6[1].klass,
                         (GameStatCounterManager *)pWVar8,*(int32_t *)&pOVar13[1].klass,1,
                         CONCAT31((int3)((uint)in_stack_11 >> 8),1),
                         CONCAT31((int3)((uint)in_stack_12 >> 8),2),(MethodInfo *)0x0)
              ;
              pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                pvVar1 = (void *)FUN_?(pvVar1);
              }
              if (pWVar9 == (WinningCondition *)0x0) {
                return (Object *)0x0;
              }
              pOVar6 = (Object *)FUN_?(pWVar9,pvVar1);
              if (pOVar6 != (Object *)0x0) {
                return pOVar6;
              }
              FUN_?(pWVar9,pvVar1);
              pcVar7 = (code *)swi(3);
              pOVar6 = (Object *)(*pcVar7)();
              return pOVar6;
            }
          }
        }
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pWVar5 = (WinningCondition *)
                 mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
        pIVar4 = TypeRef__TimeLimitClient;
        if (pWVar2 == pWVar5) {
          if (args != (Object__Array *)0x0) {
            if (((((int)args->max_length == 0) ||
                 (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
                (pOVar6 = args->vector[1], (uint)args->max_length < 3)) ||
               (pWVar5 = (WinningCondition *)args->vector[2], (uint)args->max_length < 4))
            goto code_?;
            pOVar13 = args->vector[3];
            pWVar9 = (WinningCondition *)FUN_?(TypeInfo__OculusKillLimitClient);
            if (pOVar13 != (Object *)0x0) {
              if ((pOVar13->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar13,lRam_?);
                pcVar7 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar7)();
                return pOVar6;
              }
              pWVar8 = parent;
              if (pWVar5 != (WinningCondition *)0x0) {
                bVar10 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                if (((pWVar5->klass->_1).naturalAligment < bVar10) ||
                   (pWVar8 = pWVar5,
                   (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                   (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                  FUN_?(pWVar5);
                  pcVar7 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar7)();
                  return pOVar6;
                }
              }
              if (pOVar6 != (Object *)0x0) {
                if ((pOVar6->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar6,lRam_?);
                  pcVar7 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar7)();
                  return pOVar6;
                }
                if (pWVar2 != (WinningCondition *)0x0) {
                  bVar10 = (TypeInfo__WinningCondition->_1).naturalAligment;
                  if (((pWVar2->klass->_1).naturalAligment < bVar10) ||
                     (parent = pWVar2,
                     (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                     (Il2CppClass *)TypeInfo__WinningCondition)) {
                    FUN_?(pWVar2);
                    pcVar7 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar7)();
                    return pOVar6;
                  }
                }
                MVWorldObject.dll::WinningCondition::WinningCondition__ctor
                          (pWVar9,parent,*(int32_t *)&pOVar6[1].klass,
                           (GameStatCounterManager *)pWVar8,*(int32_t *)&pOVar13[1].klass,1,
                           CONCAT31((int3)((uint)in_stack_11 >> 8),6),
                           CONCAT31((int3)((uint)in_stack_12 >> 8),2),
                           (MethodInfo *)0x0);
                pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                  pvVar1 = (void *)FUN_?(pvVar1);
                }
                if (pWVar9 == (WinningCondition *)0x0) {
                  return (Object *)0x0;
                }
                pOVar6 = (Object *)FUN_?(pWVar9,pvVar1);
                if (pOVar6 != (Object *)0x0) {
                  return pOVar6;
                }
                FUN_?(pWVar9,pvVar1);
                pcVar7 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar7)();
                return pOVar6;
              }
            }
          }
        }
        else {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pWVar5 = (WinningCondition *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
          pIVar4 = TypeRef__TimeAttackFlagReachedClient;
          if (pWVar2 == pWVar5) {
            if (args != (Object__Array *)0x0) {
              if ((((int)args->max_length == 0) ||
                  (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
                 (pOVar6 = args->vector[1], (uint)args->max_length < 3)) goto code_?;
              pWVar5 = (WinningCondition *)args->vector[2];
              pWVar8 = (WinningCondition *)FUN_?(TypeInfo__TimeLimitClient);
              pWVar9 = parent;
              if (pWVar5 != (WinningCondition *)0x0) {
                bVar10 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                if (((pWVar5->klass->_1).naturalAligment < bVar10) ||
                   (pWVar9 = pWVar5,
                   (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                   (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                  FUN_?(pWVar5);
                  pcVar7 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar7)();
                  return pOVar6;
                }
              }
              if (pOVar6 != (Object *)0x0) {
                if ((pOVar6->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar6);
                  pcVar7 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar7)();
                  return pOVar6;
                }
                if (pWVar2 != (WinningCondition *)0x0) {
                  bVar10 = (TypeInfo__WinningCondition->_1).naturalAligment;
                  if (((pWVar2->klass->_1).naturalAligment < bVar10) ||
                     (parent = pWVar2,
                     (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                     (Il2CppClass *)TypeInfo__WinningCondition)) {
                    FUN_?(pWVar2);
                    pcVar7 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar7)();
                    return pOVar6;
                  }
                }
                MVWorldObject.dll::WinningCondition::WinningCondition__ctor
                          (pWVar8,parent,*(int32_t *)&pOVar6[1].klass,
                           (GameStatCounterManager *)pWVar9,0,1,
                           CONCAT31((int3)((uint)in_stack_11 >> 8),4),
                           CONCAT31((int3)((uint)in_stack_12 >> 8),2),
                           (MethodInfo *)0x0);
                pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                  pvVar1 = (void *)FUN_?(pvVar1);
                }
                if (pWVar8 == (WinningCondition *)0x0) {
                  return (Object *)0x0;
                }
                pOVar6 = (Object *)FUN_?(pWVar8,pvVar1);
                if (pOVar6 != (Object *)0x0) {
                  return pOVar6;
                }
                FUN_?(pWVar8,pvVar1);
                pcVar7 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar7)();
                return pOVar6;
              }
            }
          }
          else {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            pWVar5 = (WinningCondition *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
            if (pWVar2 == pWVar5) {
              if (args != (Object__Array *)0x0) {
                if ((((int)args->max_length == 0) ||
                    (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
                   (pOVar6 = args->vector[1], (uint)args->max_length < 3))
                goto code_?;
                pWVar5 = (WinningCondition *)args->vector[2];
                pWVar8 = (WinningCondition *)FUN_?(TypeInfo__TimeAttackFlagReachedClient);
                pWVar9 = parent;
                if (pWVar5 != (WinningCondition *)0x0) {
                  bVar10 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                  if (((pWVar5->klass->_1).naturalAligment < bVar10) ||
                     (pWVar9 = pWVar5,
                     (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                     (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                    FUN_?(pWVar5);
                    pcVar7 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar7)();
                    return pOVar6;
                  }
                }
                if (pOVar6 != (Object *)0x0) {
                  if ((pOVar6->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar6);
                    pcVar7 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar7)();
                    return pOVar6;
                  }
                  if (pWVar2 != (WinningCondition *)0x0) {
                    bVar10 = (TypeInfo__WinningCondition->_1).naturalAligment;
                    if (((pWVar2->klass->_1).naturalAligment < bVar10) ||
                       (parent = pWVar2,
                       (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
                       (Il2CppClass *)TypeInfo__WinningCondition)) {
                      FUN_?(pWVar2);
                      pcVar7 = (code *)swi(3);
                      pOVar6 = (Object *)(*pcVar7)();
                      return pOVar6;
                    }
                  }
                  MVWorldObject.dll::WinningCondition::WinningCondition__ctor
                            (pWVar8,parent,*(int32_t *)&pOVar6[1].klass,
                             (GameStatCounterManager *)pWVar9,0,1,
                             CONCAT31((int3)((uint)in_stack_11 >> 8),8),
                             CONCAT31((int3)((uint)in_stack_12 >> 8),1),
                             (MethodInfo *)0x0);
                  pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                    pvVar1 = (void *)FUN_?(pvVar1);
                  }
                  if (pWVar8 == (WinningCondition *)0x0) {
                    return (Object *)0x0;
                  }
                  pOVar6 = (Object *)FUN_?(pWVar8,pvVar1);
                  if (pOVar6 != (Object *)0x0) {
                    return pOVar6;
                  }
                  FUN_?(pWVar8,pvVar1);
                  pcVar7 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar7)();
                  return pOVar6;
                }
              }
            }
            else if (this != (WinningConditionManagerClient *)0x0) {
              pOVar6 = MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Factory
                                 ((WinningConditionManager *)this,args,
                                  (method->field7_0x38).rgctx_data[2].method);
              return pOVar6;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar7)();
  return pOVar6;
}

