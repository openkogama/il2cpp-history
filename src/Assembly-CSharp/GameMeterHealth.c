
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_Initialize
               (GameMeterHealth *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&MethodInfo__GameMeterHealth__OnHealthChange_float_);
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&MethodInfo__GameMeterHealth__OnMaxHealthChange_int_);
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>_
                 );
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                 );
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                 );
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>
                 );
    LOCK();
    UNLOCK();
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStack_1._arg1 = (Object *)&UNK_?;
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
  pSVar3 = (pSVar2->fields).health;
  PStack_1._arg1 = (Object *)&UNK_?;
  uVar4 = FUN_?(
                        TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                        );
  PStack_1._arg1 = (Object *)&UNK_?;
  FUN_?(uVar4,this);
  if (pSVar3 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0)
  goto code_?;
  PStack_1._arg1 = (Object *)&UNK_?;
  FUN_?(pSVar3,uVar4);
  PStack_1._arg1 = (Object *)&UNK_?;
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar2 == (SpawnRoleDataMediator *)0x0) goto code_?;
  pSVar5 = (pSVar2->fields).maxHealth;
  PStack_1._arg1 = (Object *)&UNK_?;
  b = (Delegate *)
      FUN_?(
                   TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>
                   );
  pMVar6 = MethodInfo__GameMeterHealth__OnMaxHealthChange_int_;
  bVar7 = iRam_? != 0;
  (b->fields).method_ptr = MethodInfo__GameMeterHealth__OnMaxHealthChange_int_->virtualMethodPointer
  ;
  (b->fields).method = pMVar6;
  (b->fields).m_target = (Object *)this;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  uVar12 = pMVar6->parameters_count;
  (b->fields).method_code = b;
  if ((pMVar6->flags & 0x10) == 0) {
    if (this == (GameMeterHealth *)0x0) {
      PStack_1._arg1 = (Object *)&UNK_?;
      uVar4 = func_?();
      PStack_1._arg1 = (Object *)&UNK_?;
      FUN_?(uVar4,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
code_?:
    (b->fields).method_code = (b->fields).m_target;
    puVar14 = (b->fields).method_ptr;
  }
  else {
    if (uVar12 != 1) goto code_?;
    puVar14 = &UNK_?;
  }
  (b->fields).invoke_impl = puVar14;
  (b->fields).extra_arg = FUN_?;
  pMVar6 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>_
  ;
  if (pSVar5 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Int32_ *)0x0) {
code_?:
    PStack_1._arg1 = (Object *)&UNK_?;
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  ppSVar15 = &(pSVar5->fields)._.OnChange;
  a = (pSVar5->fields)._.OnChange;
  do {
    PStack_1._arg1 = (Object *)&UNK_?;
    pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0);
    pvVar17 = pMVar6->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
      PStack_1._arg1 = (Object *)&UNK_?;
      pvVar17 = (void *)FUN_?();
    }
    if (pDVar16 == (Delegate *)0x0) {
      pSVar18 = (SpawnRoleVariable_1_T_SubDelegate_System_Int32_ *)0x0;
    }
    else {
      PStack_1._arg1 = (Object *)&UNK_?;
      pSVar18 = (SpawnRoleVariable_1_T_SubDelegate_System_Int32_ *)FUN_?(pDVar16,pvVar17);
      if (pSVar18 == (SpawnRoleVariable_1_T_SubDelegate_System_Int32_ *)0x0) {
        PStack_1._arg1 = (Object *)&UNK_?;
        FUN_?(pDVar16,pvVar17);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    LOCK();
    pSVar19 = *ppSVar15;
    bVar7 = a == pSVar19;
    if (bVar7) {
      *ppSVar15 = pSVar18;
      pSVar19 = a;
    }
    UNLOCK();
    pSVar18 = a;
    if (!bVar7) {
      pSVar18 = pSVar19;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppSVar15 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pSVar18 != a;
    a = pSVar18;
  } while (bVar7);
  PStack_1._arg1 = (Object *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  PStack_1._arg1 = (Object *)&UNK_?;
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
      (pSVar3 = (pSVar2->fields).health,
      pSVar3 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0)) ||
     (pSVar20 = (pSVar3->fields)._.subscribableVariable,
     pSVar20 == (SubscribableVariable_1_System_Single_ *)0x0)) goto code_?;
  fVar21 = (pSVar20->fields)._.value;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar8 = 0;
  if (fVar21 < (this->fields).storedHealthValue) {
    this_00 = (this->fields).shaker;
    if ((this_00 == (GameMeterShake *)0x0) ||
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 == (GameObject *)0x0))
    goto code_?;
    bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (this_02,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      pIVar23 = (IEnumerator__Class *)(this->fields).shaker;
      if (pIVar23 == (IEnumerator__Class *)0x0) goto code_?;
      if (*(IEnumerator **)((longlong)&pIVar23->_0 + 0x30) != (IEnumerator *)0x0) {
        pIVar24 = *(IEnumerator **)((longlong)&pIVar23->_0 + 0x30);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Coroutines);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar25 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (pMVar25 == (MonoBehaviour *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                  (pMVar25,pIVar24,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GameMeterShake___ShakeAnimation_d__5);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar24 = (IEnumerator *)FUN_?(TypeInfo__GameMeterShake___ShakeAnimation_d__5);
      *(undefined4 *)&pIVar24[1].klass = 0;
      pIVar24[2].klass = pIVar23;
      if (iRam_? != 0) {
        uVar26 = (uint)((ulonglong)(pIVar24 + 2) >> 0xc);
        uVar9 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar26 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      iVar27 = iRam_?;
      *(IEnumerator **)((longlong)&pIVar23->_0 + 0x30) = pIVar24;
      if (iVar27 != 0) {
        uVar26 = (uint)((ulonglong)&(pIVar23->_0).this_arg >> 0xc);
        uVar9 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (ulonglong)(uVar26 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pIVar24 = (IEnumerator *)(pIVar23->_0).this_arg.data.typeHandle;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Coroutines);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar25 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
      if (pMVar25 == (MonoBehaviour *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                (pMVar25,pIVar24,(MethodInfo *)0x0);
    }
  }
  value = (float)func_?();
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  arg0 = mscorlib.dll::System::Number::Number_FormatSingle
                   (value,(String *)0x0,info,(MethodInfo *)0x0);
  pTVar28 = (this->fields).healthText;
  arg1 = (Object *)FUN_?(uRam_?,&stack0x00000010);
  pSVar29 = StringLiteral__0_____1_;
  PStack_30._arg0 = (Object *)0x0;
  PStack_30._arg1 = (Object *)0x0;
  PStack_30._arg2 = (Object *)0x0;
  PStack_30._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_30,(Object *)arg0,arg1,(MethodInfo *)0x0);
  PStack_1._arg0 = PStack_30._arg0;
  PStack_1._arg1 = PStack_30._arg1;
  PStack_1._arg2 = PStack_30._arg2;
  PStack_1._args = PStack_30._args;
  pSVar29 = mscorlib.dll::System::String::String_FormatHelper
                      ((IFormatProvider *)0x0,pSVar29,&PStack_1,(MethodInfo *)0x0);
  if (pTVar28 != (Text *)0x0) {
    (*(pTVar28->klass->vtable).set_text.methodPtr)(pTVar28,pSVar29);
    pPVar31 = (this->fields).progressBar;
    (this->fields).storedHealthValue = fVar21;
    if (pPVar31 != (ProgressBar *)0x0) {
      fVar21 = fVar21 / (float)(this->fields).maxHealthValue;
      if (fVar21 < 0.0) {
        fVar21 = 0.0;
      }
      else if (_UNK_? < fVar21) {
        fVar21 = _UNK_?;
      }
      this_01 = (pPVar31->fields).progressBar;
      (pPVar31->fields).progress = fVar21;
      if (this_01 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_01,fVar21,(MethodInfo *)0x0);
        pLVar32 = (this->fields)._.gameMeterVisualEffects;
        if (pLVar32 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
          lVar33 = 0x20;
          do {
            if ((pLVar32->fields)._size <= (int)uVar8) {
              return;
            }
            pLVar32 = (this->fields)._.gameMeterVisualEffects;
            if (pLVar32 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
            if ((uint)(pLVar32->fields)._size <= uVar8) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pGVar34 = (pLVar32->fields)._items;
            if (pGVar34 == (GameMeterVisualEffect__Array *)0x0) break;
            if ((uint)pGVar34->max_length <= uVar8) {
              FUN_?();
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            plVar35 = *(longlong **)((longlong)pGVar34->vector + lVar33 + -0x20);
            if (plVar35 == (longlong *)0x0) break;
            (**(code **)(*plVar35 + 0x178))(plVar35,*(undefined8 *)(*plVar35 + 0x180));
            pLVar32 = (this->fields)._.gameMeterVisualEffects;
            uVar8 = uVar8 + 1;
            lVar33 = lVar33 + 8;
          } while (pLVar32 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnHealthChange(Single) */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_OnHealthChange
               (GameMeterHealth *this,float newHealthValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (newHealthValue < (this->fields).storedHealthValue) {
    this_00 = (this->fields).shaker;
    if ((this_00 == (GameMeterShake *)0x0) ||
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 == (GameObject *)0x0))
    goto code_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (this_02,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pIVar3 = (IEnumerator__Class *)(this->fields).shaker;
      if (pIVar3 == (IEnumerator__Class *)0x0) goto code_?;
      if (*(IEnumerator **)((longlong)&pIVar3->_0 + 0x30) != (IEnumerator *)0x0) {
        pIVar4 = *(IEnumerator **)((longlong)&pIVar3->_0 + 0x30);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Coroutines);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (pMVar5 == (MonoBehaviour *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                  (pMVar5,pIVar4,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GameMeterShake___ShakeAnimation_d__5);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar4 = (IEnumerator *)FUN_?(TypeInfo__GameMeterShake___ShakeAnimation_d__5);
      *(undefined4 *)&pIVar4[1].klass = 0;
      pIVar4[2].klass = pIVar3;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pIVar4 + 2) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      iVar11 = iRam_?;
      *(IEnumerator **)((longlong)&pIVar3->_0 + 0x30) = pIVar4;
      if (iVar11 != 0) {
        uVar6 = (uint)((ulonglong)&(pIVar3->_0).this_arg >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pIVar4 = (IEnumerator *)(pIVar3->_0).this_arg.data.typeHandle;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Coroutines);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
      if (pMVar5 == (MonoBehaviour *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                (pMVar5,pIVar4,(MethodInfo *)0x0);
    }
  }
  fVar12 = (float)func_?();
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  arg0 = mscorlib.dll::System::Number::Number_FormatSingle
                   (fVar12,(String *)0x0,info,(MethodInfo *)0x0);
  aiStackX_10[0] = (this->fields).maxHealthValue;
  pTVar13 = (this->fields).healthText;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  pSVar14 = StringLiteral__0_____1_;
  PStack_15._arg0 = (Object *)0x0;
  PStack_15._arg1 = (Object *)0x0;
  PStack_15._arg2 = (Object *)0x0;
  PStack_15._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_15,(Object *)arg0,arg1,(MethodInfo *)0x0);
  aPStack_16[0]._arg0 = PStack_15._arg0;
  aPStack_16[0]._arg1 = PStack_15._arg1;
  aPStack_16[0]._arg2 = PStack_15._arg2;
  aPStack_16[0]._args = PStack_15._args;
  pSVar14 = mscorlib.dll::System::String::String_FormatHelper
                      ((IFormatProvider *)0x0,pSVar14,aPStack_16,(MethodInfo *)0x0);
  if (pTVar13 != (Text *)0x0) {
    (*(pTVar13->klass->vtable).set_text.methodPtr)(pTVar13,pSVar14);
    pPVar17 = (this->fields).progressBar;
    (this->fields).storedHealthValue = newHealthValue;
    if (pPVar17 != (ProgressBar *)0x0) {
      fVar12 = newHealthValue / (float)(this->fields).maxHealthValue;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      else if (_UNK_? < fVar12) {
        fVar12 = _UNK_?;
      }
      this_01 = (pPVar17->fields).progressBar;
      (pPVar17->fields).progress = fVar12;
      if (this_01 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_01,fVar12,(MethodInfo *)0x0);
        pLVar18 = (this->fields)._.gameMeterVisualEffects;
        if (pLVar18 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
          lVar19 = 0x20;
          do {
            if ((pLVar18->fields)._size <= (int)uVar1) {
              return;
            }
            pLVar18 = (this->fields)._.gameMeterVisualEffects;
            if (pLVar18 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
            if ((uint)(pLVar18->fields)._size <= uVar1) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            pGVar21 = (pLVar18->fields)._items;
            if (pGVar21 == (GameMeterVisualEffect__Array *)0x0) break;
            if ((uint)pGVar21->max_length <= uVar1) {
              FUN_?();
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            plVar22 = *(longlong **)((longlong)pGVar21->vector + lVar19 + -0x20);
            if (plVar22 == (longlong *)0x0) break;
            (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
            pLVar18 = (this->fields)._.gameMeterVisualEffects;
            uVar1 = uVar1 + 1;
            lVar19 = lVar19 + 8;
          } while (pLVar18 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnMaxHealthChange(Int32) */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_OnMaxHealthChange
               (GameMeterHealth *this,int32_t maxHealthValue,MethodInfo *method)

{
  fVar1 = (this->fields).storedHealthValue;
  (this->fields).maxHealthValue = maxHealthValue;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = 0;
  if (fVar1 < (this->fields).storedHealthValue) {
    this_00 = (this->fields).shaker;
    if ((this_00 == (GameMeterShake *)0x0) ||
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 == (GameObject *)0x0))
    goto code_?;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (this_02,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pIVar4 = (IEnumerator__Class *)(this->fields).shaker;
      if (pIVar4 == (IEnumerator__Class *)0x0) goto code_?;
      if (*(IEnumerator **)((longlong)&pIVar4->_0 + 0x30) != (IEnumerator *)0x0) {
        pIVar5 = *(IEnumerator **)((longlong)&pIVar4->_0 + 0x30);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Coroutines);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar6 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
        if (pMVar6 == (MonoBehaviour *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                  (pMVar6,pIVar5,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GameMeterShake___ShakeAnimation_d__5);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar5 = (IEnumerator *)FUN_?(TypeInfo__GameMeterShake___ShakeAnimation_d__5);
      *(undefined4 *)&pIVar5[1].klass = 0;
      pIVar5[2].klass = pIVar4;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)(pIVar5 + 2) >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      iVar12 = iRam_?;
      *(IEnumerator **)((longlong)&pIVar4->_0 + 0x30) = pIVar5;
      if (iVar12 != 0) {
        uVar7 = (uint)((ulonglong)&(pIVar4->_0).this_arg >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pIVar5 = (IEnumerator *)(pIVar4->_0).this_arg.data.typeHandle;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Coroutines);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
      if (pMVar6 == (MonoBehaviour *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                (pMVar6,pIVar5,(MethodInfo *)0x0);
    }
  }
  value = (float)func_?();
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  arg0 = mscorlib.dll::System::Number::Number_FormatSingle
                   (value,(String *)0x0,info,(MethodInfo *)0x0);
  aiStackX_10[0] = (this->fields).maxHealthValue;
  pTVar13 = (this->fields).healthText;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_10);
  pSVar14 = StringLiteral__0_____1_;
  PStack_15._arg0 = (Object *)0x0;
  PStack_15._arg1 = (Object *)0x0;
  PStack_15._arg2 = (Object *)0x0;
  PStack_15._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_15,(Object *)arg0,arg1,(MethodInfo *)0x0);
  aPStack_16[0]._arg0 = PStack_15._arg0;
  aPStack_16[0]._arg1 = PStack_15._arg1;
  aPStack_16[0]._arg2 = PStack_15._arg2;
  aPStack_16[0]._args = PStack_15._args;
  pSVar14 = mscorlib.dll::System::String::String_FormatHelper
                      ((IFormatProvider *)0x0,pSVar14,aPStack_16,(MethodInfo *)0x0);
  if (pTVar13 != (Text *)0x0) {
    (*(pTVar13->klass->vtable).set_text.methodPtr)(pTVar13,pSVar14);
    pPVar17 = (this->fields).progressBar;
    (this->fields).storedHealthValue = fVar1;
    if (pPVar17 != (ProgressBar *)0x0) {
      fVar1 = fVar1 / (float)(this->fields).maxHealthValue;
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
      else if (_UNK_? < fVar1) {
        fVar1 = _UNK_?;
      }
      this_01 = (pPVar17->fields).progressBar;
      (pPVar17->fields).progress = fVar1;
      if (this_01 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_01,fVar1,(MethodInfo *)0x0);
        pLVar18 = (this->fields)._.gameMeterVisualEffects;
        if (pLVar18 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
          lVar19 = 0x20;
          do {
            if ((pLVar18->fields)._size <= (int)uVar2) {
              return;
            }
            pLVar18 = (this->fields)._.gameMeterVisualEffects;
            if (pLVar18 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
            if ((uint)(pLVar18->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            pGVar21 = (pLVar18->fields)._items;
            if (pGVar21 == (GameMeterVisualEffect__Array *)0x0) break;
            if ((uint)pGVar21->max_length <= uVar2) {
              FUN_?();
              pcVar20 = (code *)swi(3);
              (*pcVar20)();
              return;
            }
            plVar22 = *(longlong **)((longlong)pGVar21->vector + lVar19 + -0x20);
            if (plVar22 == (longlong *)0x0) break;
            (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
            pLVar18 = (this->fields)._.gameMeterVisualEffects;
            uVar2 = uVar2 + 1;
            lVar19 = lVar19 + 8;
          } while (pLVar18 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* GameMeterHealth() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth__ctor
               (GameMeterHealth *this,MethodInfo *method)

{
  (this->fields).maxHealthValue = 100;
  (this->fields).storedHealthValue = -1.0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.gameMeterVisualEffects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.gameMeterVisualEffects >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.meterActive = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

