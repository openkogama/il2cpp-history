
/* Void ActivateParticles(BoostType) */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_ActivateParticles
               (BoostParticlesActivationEffect *this,BoostType__Enum typeToActivate,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boostColors;
  uVar2 = 0;
  PStackX_8.m_ParticleSystem = (ParticleSystem *)0x0;
  PStackX_20.m_ParticleSystem = (ParticleSystem *)0x0;
  uVar3 = uVar2;
  while (pLVar1 != (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) {
    uVar4 = (uint)uVar3;
    if ((pLVar1->fields)._size <= (int)uVar4) {
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      fVar7 = (float)(*pcRam_?)();
      (this->fields).activationStartTime = fVar7;
      return;
    }
    pLVar1 = (this->fields).boostColors;
    if (pLVar1 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
    if ((uint)(pLVar1->fields)._size <= uVar4) goto code_?;
    pBVar8 = (pLVar1->fields)._items;
    if (pBVar8 == (BoostParticlesActivationEffect_BoosterColors__Array *)0x0) break;
    if ((uint)pBVar8->max_length <= uVar4) goto code_?;
    puVar9 = (undefined8 *)((longlong)&pBVar8->vector[0].rayColor.a + uVar2);
    uVar6 = *puVar9;
    uVar10 = puVar9[1];
    fStack_11 = *(float *)((longlong)&pBVar8->vector[0].bubbleColor.a + uVar2);
    auStack_12._16_4_ = (undefined4)uVar6;
    auStack_12._20_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    fStack_13 = (float)uVar10;
    fStack_14 = (float)((ulonglong)uVar10 >> 0x20);
    if (*(BoostType__Enum *)((longlong)&pBVar8->vector[0].type + uVar2) == typeToActivate) {
      pPVar15 = (this->fields).rayParticles;
      if (pPVar15 == (ParticleSystem *)0x0) break;
      PStackX_8.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar15,(MethodInfo *)0x0);
      pLVar1 = (this->fields).boostColors;
      if (pLVar1 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pBVar8 = (pLVar1->fields)._items;
      if (pBVar8 == (BoostParticlesActivationEffect_BoosterColors__Array *)0x0) break;
      if ((uint)pBVar8->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar9 = (undefined8 *)((longlong)&pBVar8->vector[0].type + uVar2);
      uVar6 = *puVar9;
      uVar10 = puVar9[1];
      puVar9 = (undefined8 *)((longlong)&pBVar8->vector[0].rayColor.a + uVar2);
      uVar16 = *puVar9;
      CStack_17._0_8_ = puVar9[1];
      auStack_18._0_4_ = (undefined4)uVar6;
      auStack_18._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      fStack_19 = (float)uVar10;
      fStack_20 = (float)((ulonglong)uVar10 >> 0x20);
      CStack_17.b = *(float *)((longlong)&pBVar8->vector[0].bubbleColor.a + uVar2);
      fStack_21 = (float)uVar16;
      uStack_22 = (undefined4)((ulonglong)uVar16 >> 0x20);
      CStack_23.g = fStack_19;
      CStack_23.r = (float)auStack_18._4_4_;
      CStack_23.a = fStack_21;
      CStack_23.b = fStack_20;
      pPVar24 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                ParticleSystem_MinMaxGradient_op_Implicit(&PStack_25,&CStack_23,(MethodInfo *)0x0);
      CStack_17.r = (pPVar24->m_ColorMin).r;
      CStack_17.g = (pPVar24->m_ColorMin).g;
      auStack_18._0_4_ = (undefined4)*(undefined8 *)pPVar24;
      auStack_18._4_4_ = (undefined4)((ulonglong)*(undefined8 *)pPVar24 >> 0x20);
      fStack_19 = SUB84(pPVar24->m_GradientMin,0);
      fStack_20 = (float)((ulonglong)pPVar24->m_GradientMin >> 0x20);
      CStack_17.b = (pPVar24->m_ColorMin).b;
      CStack_17.a = (pPVar24->m_ColorMin).a;
      CStack_26.r = (pPVar24->m_ColorMax).r;
      CStack_26.g = (pPVar24->m_ColorMax).g;
      fStack_21 = SUB84(pPVar24->m_GradientMax,0);
      uStack_22 = (undefined4)((ulonglong)pPVar24->m_GradientMax >> 0x20);
      CStack_26.b = (pPVar24->m_ColorMax).b;
      CStack_26.a = (pPVar24->m_ColorMax).a;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startColor
                (&PStackX_8,(ParticleSystem_MinMaxGradient *)auStack_18,(MethodInfo *)0x0);
      pPVar15 = (this->fields).rayParticles;
      if (pPVar15 == (ParticleSystem *)0x0) break;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar15,1,(MethodInfo *)0x0);
      pPVar15 = (this->fields).bubbleParticles;
      if (pPVar15 == (ParticleSystem *)0x0) break;
      PStackX_20.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar15,(MethodInfo *)0x0);
      pLVar1 = (this->fields).boostColors;
      if (pLVar1 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar4) goto code_?;
      pBVar8 = (pLVar1->fields)._items;
      if (pBVar8 == (BoostParticlesActivationEffect_BoosterColors__Array *)0x0) break;
      if ((uint)pBVar8->max_length <= uVar4) goto code_?;
      puVar9 = (undefined8 *)((longlong)&pBVar8->vector[0].type + uVar2);
      auStack_12._0_8_ = *puVar9;
      auStack_12._8_8_ = puVar9[1];
      puVar9 = (undefined8 *)((longlong)&pBVar8->vector[0].rayColor.a + uVar2);
      uVar6 = *puVar9;
      uVar10 = puVar9[1];
      fStack_11 = *(float *)((longlong)&pBVar8->vector[0].bubbleColor.a + uVar2);
      auStack_12._16_4_ = (undefined4)uVar6;
      auStack_12._20_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      fStack_13 = (float)uVar10;
      fStack_14 = (float)((ulonglong)uVar10 >> 0x20);
      CStack_23.g = fStack_13;
      CStack_23.r = (float)auStack_12._20_4_;
      CStack_23.a = fStack_11;
      CStack_23.b = fStack_14;
      pPVar24 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                ParticleSystem_MinMaxGradient_op_Implicit(&PStack_25,&CStack_23,(MethodInfo *)0x0);
      auStack_12._0_4_ = pPVar24->m_Mode;
      auStack_12._4_4_ = *(undefined4 *)&pPVar24->field_0x4;
      auStack_12._8_8_ = pPVar24->m_GradientMin;
      uVar27 = (pPVar24->m_ColorMin).r;
      uVar28 = (pPVar24->m_ColorMin).g;
      uVar29 = (pPVar24->m_ColorMin).b;
      uVar30 = (pPVar24->m_ColorMin).a;
      CStack_31.r = (pPVar24->m_ColorMax).r;
      CStack_31.g = (pPVar24->m_ColorMax).g;
      auStack_12._16_4_ = SUB84(pPVar24->m_GradientMax,0);
      auStack_12._20_4_ = (undefined4)((ulonglong)pPVar24->m_GradientMax >> 0x20);
      CStack_31.b = (pPVar24->m_ColorMax).b;
      CStack_31.a = (pPVar24->m_ColorMax).a;
      fStack_13 = (float)uVar27;
      fStack_14 = (float)uVar28;
      fStack_11 = (float)uVar29;
      fStack_32 = (float)uVar30;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startColor
                (&PStackX_20,(ParticleSystem_MinMaxGradient *)auStack_12,(MethodInfo *)0x0);
      pPVar15 = (this->fields).bubbleParticles;
      if (pPVar15 == (ParticleSystem *)0x0) break;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar15,1,(MethodInfo *)0x0);
    }
    uVar3 = (ulonglong)(uVar4 + 1);
    uVar2 = uVar2 + 0x24;
    pLVar1 = (this->fields).boostColors;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_OnAvatarModeChange
               (BoostParticlesActivationEffect *this,SpawnRoleModeType__Enum newMode,
               MethodInfo *method)

{
  if ((((this->fields).previousMode == 4) || ((this->fields).previousMode == 2)) &&
     (newMode == SpawnRoleModeType__Enum_Playing)) {
    BoostParticlesActivationEffect_OnAvatarSpawn(this,(MethodInfo *)0x0);
    (this->fields).previousMode = 1;
    return;
  }
  (this->fields).previousMode = newMode;
  return;
}


/* Void OnAvatarSpawn() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_OnAvatarSpawn
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boostsToActivate;
  if (pLVar1 != (List_1_BoostType_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
         (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
        (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) &&
       (((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
         pMVar6 != (MVLocalPlayer *)0x0 &&
         (pBVar7 = (pMVar6->fields).boostController, pBVar7 != (BoostController *)0x0)) &&
        (pDVar8 = BoostController::BoostController_GetAllBoosts(pBVar7,(MethodInfo *)0x0),
        pDVar8 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)))) {
      pDStack_9 = (pDVar8->fields)._dictionary;
      ppDStack_10 = (Dictionary_2_BoostType_Boost_ **)0x0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)&pDStack_13 >> 0xc);
        puVar14 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar15 = *puVar14;
          LOCK();
          uVar16 = *puVar14;
          if (uVar15 == uVar16) {
            *puVar14 = uVar15 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (uVar15 != uVar16);
      }
      if (pDStack_9 == (Dictionary_2_BoostType_Boost_ *)0x0) {
        pDStack_13 = pDStack_9;
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iStack_18 = (pDStack_9->fields)._version;
      uStack_11 = 0;
      uStack_19 = 0;
      apBStack_20[0] = (Boost *)0x0;
      pDStack_13 = (Dictionary_2_BoostType_Boost_ *)0x0;
      ppDStack_10 = &pDStack_9;
code_?:
      if (pDStack_9 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        if (iStack_18 == (pDStack_9->fields)._version) {
          do {
            if (pDStack_9 == (Dictionary_2_BoostType_Boost_ *)0x0) goto code_?;
            if ((uint)(pDStack_9->fields)._count <= uStack_19) {
              return;
            }
            pDVar21 = (pDStack_9->fields)._entries;
            lVar22 = (longlong)(int)uStack_19;
            uVar12 = uStack_19 + 1;
            if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_BoostType_Boost___Array *)0x0)
            goto code_?;
            if ((uint)pDVar21->max_length <= uStack_19) {
              uStack_19 = uVar12;
              FUN_?();
              goto code_?;
            }
            uStack_19 = uVar12;
          } while (pDVar21->vector[lVar22].hashCode < 0);
          apBStack_20[0] = pDVar21->vector[lVar22].value;
          func_?(apBStack_20);
          pBVar23 = apBStack_20[0];
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar3 != (MVGameControllerBase *)0x0) {
            pMVar4 = (pMVar3->fields).game;
            if (pMVar4 != (MVNetworkGame *)0x0) {
              pMVar5 = (pMVar4->fields).playerContainer;
              if (pMVar5 != (MVPlayerContainer *)0x0) {
                pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar5,(MethodInfo *)0x0);
                if (pMVar6 != (MVLocalPlayer *)0x0) {
                  pBVar7 = (pMVar6->fields).boostController;
                  if (pBVar23 != (Boost *)0x0) {
                    key = (pBVar23->fields)._Type_k__BackingField;
                    if (pBVar7 != (BoostController *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                                (pBVar7->fields).activeBoosts;
                      if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
                      goto code_?;
                      goto code_?;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
code_?:
  iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
           Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                     (this_00,key,
                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar24) {
    pLVar1 = (this->fields).boostsToActivate;
    if (pLVar1 == (List_1_BoostType_ *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      uVar12 = uStack_19;
code_?:
      uStack_19 = uVar12;
      FUN_?();
code_?:
      FUN_?();
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    FUN_?(pLVar1,(pBVar23->fields)._Type_k__BackingField);
  }
  goto code_?;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_OnDestroy
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((CONCAT71(extraout_var,extraout_AL) != 0) &&
     (lVar2 = *(longlong *)(CONCAT71(extraout_var,extraout_AL) + 200), lVar2 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    uVar3 = FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
    FUN_?(uVar3,this,
                  MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 );
    if (lVar2 != 0) {
      FUN_?(lVar2,uVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_Start
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x38);
    b = (Delegate *)
        FUN_?(
                     TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                     );
    FUN_?(b,this);
    pMVar2 = 
    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
    ;
    if (lVar1 != 0) {
      plVar3 = (longlong *)(lVar1 + 0x18);
      a = *(Delegate **)(lVar1 + 0x18);
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine(a,b,(MethodInfo *)0x0);
        pvVar5 = pMVar2->klass->rgctx_data[6].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
          pvVar5 = (void *)FUN_?();
        }
        if (pDVar4 == (Delegate *)0x0) {
          lVar1 = 0;
        }
        else {
          lVar1 = FUN_?(pDVar4,pvVar5);
          if (lVar1 == 0) {
            FUN_?(pDVar4,pvVar5);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        LOCK();
        pDVar4 = (Delegate *)*plVar3;
        bVar7 = a == pDVar4;
        if (bVar7) {
          *plVar3 = lVar1;
          pDVar4 = a;
        }
        UNLOCK();
        pDVar8 = a;
        if (!bVar7) {
          pDVar8 = pDVar4;
        }
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)plVar3 >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar11 == *puVar12;
            if (bVar7) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        bVar7 = pDVar8 != a;
        a = pDVar8;
      } while (bVar7);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_Update
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).activationStartTime;
  fVar2 = (this->fields).activationCooldown;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  if (fVar2 + fVar1 <= fVar5) {
    pLVar6 = (this->fields).boostsToActivate;
    if (pLVar6 == (List_1_BoostType_ *)0x0) goto code_?;
    iVar7 = (pLVar6->fields)._size;
    if (0 < iVar7) {
      if (iVar7 == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pBVar8 = (pLVar6->fields)._items;
      if (pBVar8 != (BoostType__Enum__Array *)0x0) {
        if ((int)pBVar8->max_length == 0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        BoostParticlesActivationEffect_ActivateParticles(this,pBVar8->vector[0],(MethodInfo *)0x0);
        pLVar6 = (this->fields).boostsToActivate;
        if (pLVar6 != (List_1_BoostType_ *)0x0) {
          if ((pLVar6->fields)._size != 0) {
            iVar7 = (pLVar6->fields)._size + -1;
            (pLVar6->fields)._size = iVar7;
            if (0 < iVar7) {
              pBVar8 = (pLVar6->fields)._items;
              mscorlib.dll::System::Array::Array_Copy_3
                        ((Array *)pBVar8,1,(Array *)pBVar8,0,iVar7,(MethodInfo *)0x0);
            }
            piVar9 = &(pLVar6->fields)._version;
            *piVar9 = *piVar9 + 1;
            return;
          }
          goto code_?;
        }
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* BoostParticlesActivationEffect() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect__ctor
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<BoostType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_BoostType_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<BoostType>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<BoostType>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).boostsToActivate = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).boostsToActivate >> 0xc);
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
  if (cRam_? == '\0') {
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

