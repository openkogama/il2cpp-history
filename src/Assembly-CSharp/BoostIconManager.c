
/* GameObject CreateBoosterIcon(BoostType) */

GameObject *
Assembly-CSharp.dll::BoostIconManager::BoostIconManager_CreateBoosterIcon
          (BoostIconManager *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoosterIcon>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BoostIconManager_couldn_t_find_i);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boosterIconPrefabs;
  uVar2 = 0;
  if (pLVar1 == (List_1_BoosterIcon_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pGVar4 = (GameObject *)(*pcVar3)();
    return pGVar4;
  }
  lVar5 = 0x20;
  do {
    if ((pLVar1->fields)._size <= (int)uVar2) {
      EStack_6.klass = (Enum__Class *)TypeInfo__BoostType;
      EStack_6.monitor = (MonitorData *)0xffffffffffffffff;
      BStack_7 = type;
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_BoostIconManager_couldn_t_find_i,pSVar8,StringLiteral__boost
                          ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar8,(MethodInfo *)0x0);
      return (GameObject *)0x0;
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pGVar4 = (GameObject *)(*pcVar3)();
      return pGVar4;
    }
    pBVar9 = (pLVar1->fields)._items;
    if (pBVar9 == (BoosterIcon__Array *)0x0) goto code_?;
    if ((uint)pBVar9->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      pGVar4 = (GameObject *)(*pcVar3)();
      return pGVar4;
    }
    if (*(BoostType__Enum *)
         ((longlong)&((BoosterIcon__Array *)(pBVar9->vector + -2))->klass + lVar5) == type) {
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      if (pBVar9 != (BoosterIcon__Array *)0x0) {
        if (uVar2 < (uint)pBVar9->max_length) {
          EStack_6.klass = *(Enum__Class **)(pBVar9->vector + (int)uVar2);
          EStack_6.monitor = (MonitorData *)pBVar9->vector[(int)uVar2].icon;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          data = EStack_6.monitor;
          pMVar10 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_The_Object_you_want_to_instantia);
            LOCK();
            UNLOCK();
            if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar10);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar8 = StringLiteral_The_Object_you_want_to_instantia;
          if ((GameObject *)data != (GameObject *)0x0) {
            pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Internal_CloneSingle
                               ((Object_1 *)data,(MethodInfo *)0x0);
            pvVar12 = ((pMVar10->field7_0x38).rgctx_data)->rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
              pvVar12 = (void *)FUN_?(pvVar12);
            }
            if (pOVar11 == (Object_1 *)0x0) {
              pGVar4 = (GameObject *)0x0;
            }
            else {
              pGVar4 = (GameObject *)FUN_?(pOVar11,pvVar12);
              if (pGVar4 == (GameObject *)0x0) {
                FUN_?(pOVar11,pvVar12);
                pcVar3 = (code *)swi(3);
                pGVar4 = (GameObject *)(*pcVar3)();
                return pGVar4;
              }
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
            if (pGVar4 != (GameObject *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
                return pGVar4;
              }
            }
            uVar13 = func_?(&TypeInfo__UnityEngine__UnityException);
            this_01 = (UnityException *)func_?(uVar13);
            pSVar8 = (String *)func_?(&StringLiteral_Instantiate_failed_because_the_c);
            UnityEngine.CoreModule.dll::UnityEngine::UnityException::UnityException__ctor_1
                      (this_01,pSVar8,(MethodInfo *)0x0);
            FUN_?(this_01,pMVar10);
            pcVar3 = (code *)swi(3);
            pGVar4 = (GameObject *)(*pcVar3)();
            return pGVar4;
          }
          uVar13 = func_?(&TypeInfo__System__ArgumentException);
          this_00 = (InvalidEnumArgumentException *)func_?(uVar13);
          System.dll::System::ComponentModel::InvalidEnumArgumentException::
          InvalidEnumArgumentException__ctor_1(this_00,pSVar8,(MethodInfo *)0x0);
          uVar13 = func_?(&
                                      MethodInfo__UnityEngine__Object__CheckNullArgument_System__Object__System__String_
                                     );
          FUN_?(this_00,uVar13);
          pcVar3 = (code *)swi(3);
          pGVar4 = (GameObject *)(*pcVar3)();
          return pGVar4;
        }
        goto code_?;
      }
      goto code_?;
    }
    uVar2 = uVar2 + 1;
    lVar5 = lVar5 + 0x10;
  } while( true );
}

