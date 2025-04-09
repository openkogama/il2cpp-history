
/* Void ActivateParticles(BoostType) */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_ActivateParticles
               (BoostParticlesActivationEffect *this,BoostType__Enum typeToActivate,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  PStack_2.m_ParticleSystem = (ParticleSystem *)0x0;
  pLVar3 = (this->fields).boostColors;
  while (pLVar3 != (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) {
    if ((pLVar3->fields)._size <= index) {
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).activationStartTime = fVar4;
      return;
    }
    pLVar3 = (this->fields).boostColors;
    if (pLVar3 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
    pBVar5 = mscorlib.dll::System::Collections::Generic::
              List`1[BoostParticlesActivationEffect+BoosterColors]::
              List_1_BoostParticlesActivationEffect_BoosterColors__get_Item
                        (&BStack_6,pLVar3,index,
                         MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
                        );
    fStack_7 = (pBVar5->rayColor).a;
    fStack_8 = (pBVar5->bubbleColor).r;
    fStack_9 = (pBVar5->bubbleColor).g;
    fStack_10 = (pBVar5->bubbleColor).b;
    fStack_11 = (pBVar5->bubbleColor).a;
    if (pBVar5->type == typeToActivate) {
      pPVar12 = (this->fields).rayParticles;
      if ((pPVar12 == (ParticleSystem *)0x0) ||
         (PStack_1.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar12,(MethodInfo *)0x0),
         (this->fields).boostColors == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0))
      break;
      apMStack_13[0] =
           MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
      ;
      piVar14 = (int32_t *)func_?(apMStack_13);
      BStack_6.type = *piVar14;
      BStack_6.rayColor.r = ((Color *)(piVar14 + 1))->r;
      BStack_6.rayColor.g = (float)piVar14[2];
      BStack_6.rayColor.b = (float)piVar14[3];
      BStack_6.rayColor.a = (float)piVar14[4];
      BStack_6.bubbleColor.r = (float)piVar14[5];
      BStack_6.bubbleColor.g = (float)piVar14[6];
      BStack_6.bubbleColor.b = (float)piVar14[7];
      BStack_6.bubbleColor.a = (float)piVar14[8];
      pPVar15 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                ParticleSystem_MinMaxGradient_op_Implicit
                          ((ParticleSystem_MinMaxGradient *)&stack0xffffff80,*(Color *)(piVar14 + 1)
                           ,(MethodInfo *)0x0);
      uVar16 = (pPVar15->m_ColorMax).b;
      uVar17 = pPVar15->m_Mode;
      uVar18 = pPVar15->m_GradientMin;
      uVar19 = pPVar15->m_GradientMax;
      uVar20 = (pPVar15->m_ColorMin).r;
      uVar21 = (pPVar15->m_ColorMin).g;
      uVar22 = (pPVar15->m_ColorMin).b;
      uVar23 = (pPVar15->m_ColorMin).a;
      value.m_ColorMin.a = (float)uVar23;
      value.m_ColorMin.b = (float)uVar22;
      value.m_ColorMin.g = (float)uVar21;
      value.m_ColorMin.r = (float)uVar20;
      uVar24 = (pPVar15->m_ColorMax).r;
      uVar25 = (pPVar15->m_ColorMax).g;
      value.m_ColorMax.g = (float)uVar25;
      value.m_ColorMax.r = (float)uVar24;
      value.m_GradientMax = (Gradient *)uVar19;
      value.m_GradientMin = (Gradient *)uVar18;
      value.m_Mode = uVar17;
      value.m_ColorMax.b = (float)uVar16;
      value.m_ColorMax.a = (pPVar15->m_ColorMax).a;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startColor(&PStack_1,value,(MethodInfo *)0x0);
      pPVar12 = (this->fields).rayParticles;
      if (pPVar12 == (ParticleSystem *)0x0) break;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar12,(MethodInfo *)0x0);
      pPVar12 = (this->fields).bubbleParticles;
      if (pPVar12 == (ParticleSystem *)0x0) break;
      PStack_2.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar12,(MethodInfo *)0x0);
      pLVar3 = (this->fields).boostColors;
      if (pLVar3 == (List_1_BoostParticlesActivationEffect_BoosterColors_ *)0x0) break;
      puVar26 = (undefined4 *)
                func_?(apMStack_13,pLVar3,index,
                                MethodInfo__System__Collections__Generic__List<BoostParticlesActivationEffect::BoosterColors>__get_Item_int_
                               );
      uStack_27 = *puVar26;
      uStack_28 = puVar26[1];
      uStack_29 = puVar26[2];
      uStack_30 = puVar26[3];
      fStack_7 = (float)puVar26[4];
      fStack_8 = ((Color *)(puVar26 + 5))->r;
      fStack_9 = (float)puVar26[6];
      fStack_10 = (float)puVar26[7];
      fStack_11 = (float)puVar26[8];
      pPVar15 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                ParticleSystem_MinMaxGradient_op_Implicit
                          ((ParticleSystem_MinMaxGradient *)&stack0xffffff80,*(Color *)(puVar26 + 5)
                           ,(MethodInfo *)0x0);
      uVar31 = (pPVar15->m_ColorMax).b;
      uVar32 = pPVar15->m_Mode;
      uVar33 = pPVar15->m_GradientMin;
      uVar34 = pPVar15->m_GradientMax;
      uVar35 = (pPVar15->m_ColorMin).r;
      uVar36 = (pPVar15->m_ColorMin).g;
      uVar37 = (pPVar15->m_ColorMin).b;
      uVar38 = (pPVar15->m_ColorMin).a;
      value_00.m_ColorMin.a = (float)uVar38;
      value_00.m_ColorMin.b = (float)uVar37;
      value_00.m_ColorMin.g = (float)uVar36;
      value_00.m_ColorMin.r = (float)uVar35;
      uVar39 = (pPVar15->m_ColorMax).r;
      uVar40 = (pPVar15->m_ColorMax).g;
      value_00.m_ColorMax.g = (float)uVar40;
      value_00.m_ColorMax.r = (float)uVar39;
      value_00.m_GradientMax = (Gradient *)uVar34;
      value_00.m_GradientMin = (Gradient *)uVar33;
      value_00.m_Mode = uVar32;
      value_00.m_ColorMax.b = (float)uVar31;
      value_00.m_ColorMax.a = (pPVar15->m_ColorMax).a;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startColor(&PStack_2,value_00,(MethodInfo *)0x0);
      pPVar12 = (this->fields).bubbleParticles;
      if (pPVar12 == (ParticleSystem *)0x0) break;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar12,(MethodInfo *)0x0);
    }
    index = index + 1;
    pLVar3 = (this->fields).boostColors;
  }
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_OnAvatarModeChange
               (BoostParticlesActivationEffect *this,SpawnRoleModeType__Enum newMode,
               MethodInfo *method)

{
  if (((this->fields).previousMode != 4) && ((this->fields).previousMode != 2)) {
    (this->fields).previousMode = newMode;
    return;
  }
  if (newMode == SpawnRoleModeType__Enum_Playing) {
    BoostParticlesActivationEffect_OnAvatarSpawn(this,(MethodInfo *)0x0);
  }
  (this->fields).previousMode = newMode;
  return;
}


/* Void OnAvatarSpawn() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::
     BoostParticlesActivationEffect_OnAvatarSpawn
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                   );
    in_stack_6 = &MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar7 = (this->fields).boostsToActivate;
  if (pLVar7 != (List_1_BoostType_ *)0x0) {
    piVar8 = &(pLVar7->fields)._version;
    *piVar8 = *piVar8 + 1;
    (pLVar7->fields)._size = 0;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if ((pMVar9 != (MVLocalPlayer *)0x0) &&
         (pBVar10 = (pMVar9->fields).boostController, pBVar10 != (BoostController *)0x0)) {
        this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)BoostController::BoostController_GetAllBoosts(pBVar10,(MethodInfo *)0x0);
        if (this_01 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_12,this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                             );
          pOVar13 = pDVar11->_currentValue;
          DStack_12._version = 0;
          uStack_1 = 1;
          DStack_12._currentValue = (Object *)&stack0xffffffc8;
          while( true ) {
            do {
              bVar14 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                      UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                  *)&stack0xffffffc8,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                                );
              if (bVar14 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&stack0xffffffc8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                           ,(MethodInfo *)in_stack_6);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0)
              ;
              if (((pMVar9 == (MVLocalPlayer *)0x0) ||
                  (pBVar10 = (pMVar9->fields).boostController, pOVar13 == (Object *)0x0)) ||
                 (pBVar10 == (BoostController *)0x0)) goto code_?;
              in_stack_6 = (MethodInfo **)0x0;
              bVar14 = BoostController::BoostController_IsBoostActive
                                (pBVar10,(BoostType__Enum)pOVar13[1].klass,(MethodInfo *)0x0);
            } while (bVar14 == 0);
            pLVar7 = (this->fields).boostsToActivate;
            if (pLVar7 == (List_1_BoostType_ *)0x0) break;
            in_stack_6 = (MethodInfo **)&UNK_?;
            func_?(pLVar7,pOVar13[1].klass,
                            MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_
                           );
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_OnDestroy
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar2 != (MVLocalPlayer *)0x0) &&
     (pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 != (SpawnRoleDataMediator *)0x0)) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar3->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
            )func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
               MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
                (this_00,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_Start
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar2->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
            )func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
               MethodInfo__BoostParticlesActivationEffect__OnAvatarModeChange_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
                (this_00,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect_Update
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).activationCooldown;
  fVar2 = (this->fields).activationStartTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 + fVar2 <= fVar3) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).boostsToActivate;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < (this_00->fields)._size) {
      typeToActivate =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,0,
                      MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_);
      BoostParticlesActivationEffect_ActivateParticles
                (this,(BoostType__Enum)typeToActivate,(MethodInfo *)0x0);
      this_01 = (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)
                (this->fields).boostsToActivate;
      if (this_01 ==
          (List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      Implementation::UIRStylePainter+RepeatRectUV]::
      List_1_UnityEngine_UIElements_UIR_Implementation_UIRStylePainter_RepeatRectUV__RemoveAt
                (this_01,0,MethodInfo__System__Collections__Generic__List<BoostType>__RemoveAt_int_)
      ;
    }
  }
  return;
}


/* BoostParticlesActivationEffect() */

void Assembly-CSharp.dll::BoostParticlesActivationEffect::BoostParticlesActivationEffect__ctor
               (BoostParticlesActivationEffect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<BoostType>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_BoostType_ *)
            func_?(TypeInfo__System__Collections__Generic__List<BoostType>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<BoostType>__List__);
  (this->fields).boostsToActivate = this_00;
  func_?(&(this->fields).boostsToActivate,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

